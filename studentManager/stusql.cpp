#include "stusql.h"
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
stuSql* stuSql::ptrstuSql = nullptr;
stuSql::stuSql(QObject *parent)
    : QObject{parent}
{

}

void stuSql::init()
{
    if(QSqlDatabase::drivers().isEmpty())
    {
        QMessageBox::information(nullptr,"No database drivers found","No database drivers found");
    }

    m_db = QSqlDatabase::addDatabase("QSQLITE");

#if 1
    auto str = QCoreApplication::applicationDirPath()+"/"+"data.db";
    qDebug()<<str;
#endif

    m_db.setDatabaseName(str);

    if(!m_db.open())
    {
        qDebug()<<"失败原因："<<m_db.lastError().text();
    }
    else
    {
        qDebug()<<"连接成功！！！！";
    }
}

//登录验证
bool stuSql::validateLogon(QString username, QString password)
{
    if(!isExit(username))
    {
        return false;
    }
    QSqlQuery sql(m_db);
    sql.exec(QString("select *from username where username='%1'").arg(username));
    while(sql.next())
    {

        QString pd = sql.value(1).toString();
        return sql.value(1) == password;
    }
}

quint32 stuSql::getStuCnt()
{
    QSqlQuery sql(m_db);
    sql.exec("select count(id) from student;");
    quint32 uiCnt = 0;
    while(sql.next())
    {
        uiCnt = sql.value(0).toUInt();
    }
    return uiCnt;
}

QList<StuInfo> stuSql::getPageStu(quint32 page, quint32 uiCnt)
{
    QList<StuInfo> l;
    QSqlQuery sql(m_db);
    QString strsql = QString("select * from student order by id limit %1 offset %2").
                        arg(uiCnt).arg(page*uiCnt);
    sql.exec(strsql);
    StuInfo info;
    while(sql.next())
    {
        info.id = sql.value(0).toUInt();
        info.name = sql.value(1).toString();
        info.age = sql.value(2).toUInt();
        info.grade = sql.value(3).toUInt();
        info.uiclass = sql.value(4).toUInt();
        info.studentid = sql.value(5).toUInt();
        info.phone = sql.value(6).toString();
        info.wechat = sql.value(7).toString();
        l.push_back(info);
    }
    return l;
}
//添加学生
bool stuSql::addStu(StuInfo info)
{
    QSqlQuery query(m_db);

    //插入数据，使用事务操作
    QString sqlInsert = QString("INSERT INTO student VALUES (NULL,'%1',%2,%3,%4,%5,'%6','%7')")
                            .arg(info.name)
                            .arg(info.age)
                            .arg(info.grade)
                            .arg(info.uiclass)
                            .arg(info.studentid)
                            .arg(info.phone)
                            .arg(info.wechat);
    m_db.transaction();
    bool flag = query.exec(sqlInsert);
    if(flag)
    {
        qDebug()<<"插入数据成功";
        m_db.commit();
    }
    else
    {
        qDebug()<<"插入数据失败";
        m_db.rollback();
    }
    return flag;
}

bool stuSql::addStu(QList<StuInfo> l)
{
    QSqlQuery query(m_db);
    m_db.transaction();
    bool flag = true;
    for(auto info:l)
    {
        //插入数据，使用事务操作
        QString sqlInsert = QString("INSERT INTO student VALUES (NULL,'%1',%2,%3,%4,%5,'%6','%7')")
                                .arg(info.name)
                                .arg(info.age)
                                .arg(info.grade)
                                .arg(info.uiclass)
                                .arg(info.studentid)
                                .arg(info.phone)
                                .arg(info.wechat);

        flag = query.exec(sqlInsert);
        if(!flag)
        {
            qDebug()<<"插入数据失败";
            m_db.rollback();
            return flag;
        }
    }
    qDebug()<<"插入数据成功";
    m_db.commit();
    return flag;
}

//删除学生
bool stuSql::delStu(int id)
{
    QSqlQuery sql(m_db);
    return sql.exec(QString("delete from student where id = %1").arg(id));
}
//清空学生
bool stuSql::clearStuTable()
{
    QSqlQuery sql(m_db);
    //删除表但是主键自增未删除
    sql.exec("delete from student");
    //去掉表的自增
    return sql.exec("delete from sqlite_sequence where name = 'student'");

}
//更新学生信息
bool stuSql::UpdateStuInfo(StuInfo info,int m_id)
{
    QSqlQuery query(m_db);

    //插入数据，使用事务操作
    QString sqlInsert = QString("update student set name = '%1',age=%2,grade=%3,class=%4,"
                                "studentid=%5,phone='%6',wechat='%7' where id=%8")
                            .arg(info.name)
                            .arg(info.age)
                            .arg(info.grade)
                            .arg(info.uiclass)
                            .arg(info.studentid)
                            .arg(info.phone)
                            .arg(info.wechat)
                            .arg(m_id);
    m_db.transaction();
    bool flag = query.exec(sqlInsert);
    if(flag)
    {
        qDebug()<<"更新数据成功";
        m_db.commit();
    }
    else
    {
        qDebug()<<"更新数据失败";
        m_db.rollback();
    }
    return flag;
}

//查询所有用户
QList<UserInfo> stuSql::getAllUser()
{
    QList<UserInfo> l;
    QSqlQuery sql(m_db);
    sql.exec("select * from username");
    UserInfo info;
    while(sql.next())
    {
        info.username = sql.value(0).toString();
        info.password = sql.value(1).toString();
        info.auth = sql.value(2).toString();
        l.push_back(info);
    }
    return l;
}

//查询用户名是否存在
bool stuSql::isExit(QString strUser)
{
    QSqlQuery sql(m_db);
    sql.exec(QString("select *from username where username='%1'").arg(strUser));
    return sql.next();
}

//更新用户信息
bool stuSql::updateUser(UserInfo info, QString username)
{
    QSqlQuery query(m_db);

    //插入数据，使用事务操作
    QString sqlInsert = QString("update username set password='%1',auth='%2' where username='%3'")
                            .arg(info.password)
                            .arg(info.auth)
                            .arg(username);
    m_db.transaction();
    bool flag = query.exec(sqlInsert);
    if(flag)
    {
        qDebug()<<"更新用户数据成功";
        m_db.commit();
    }
    else
    {
        qDebug()<<"更新用户数据失败";
        m_db.rollback();
    }
    return flag;
}

//添加单个用户
bool stuSql::addUser(UserInfo info)
{
    QSqlQuery query(m_db);

    //插入数据，使用事务操作
    QString sqlInsert = QString("INSERT INTO username VALUES ('%1','%2','%3')")
                            .arg(info.username)
                            .arg(info.password)
                            .arg(info.auth);
    m_db.transaction();
    bool flag = query.exec(sqlInsert);
    if(flag)
    {
        qDebug()<<"插入数据成功";
        m_db.commit();
    }
    else
    {
        qDebug()<<"插入数据失败";
        m_db.rollback();
    } 
    return flag;
}

//删除单个用户
bool stuSql::delUser(QString strUserName)
{
    QSqlQuery sql(m_db);
    return sql.exec(QString("delete from username where username='%1'").arg(strUserName));
}

