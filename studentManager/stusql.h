#ifndef STUSQL_H
#define STUSQL_H

#include <QObject>
#include <QSqlDatabase>
#include <QCoreApplication>

struct StuInfo
{
    int id;
    QString name;
    quint8 age;
    quint16 grade;
    quint16 uiclass;
    quint32 studentid;
    QString phone;
    QString wechat;
};
struct UserInfo
{
    QString username;
    QString password;
    QString auth;
};

class stuSql : public QObject
{
    Q_OBJECT
public:
    static stuSql* ptrstuSql;
    static stuSql* getinstance()
    {
        if(nullptr == ptrstuSql)
        {
            ptrstuSql = new stuSql;
        }
        return ptrstuSql;
    }


    explicit stuSql(QObject *parent = nullptr);

    void init();

    //登录账户密码查询
    bool validateLogon(QString username, QString password);

    //查询所有学生
    quint32 getStuCnt();

    //查询第几页学生数据,页数从零开始
    QList<StuInfo> getPageStu(quint32 page,quint32 uiCut);

    //增加学生
    bool addStu(StuInfo info);

    //增加大量学生，速度优化版
    bool addStu(QList<StuInfo> l);

    //删除学生
    bool delStu(int id);

    //清空学生表
    bool clearStuTable();

    //修改学生信息
    bool UpdateStuInfo(StuInfo info,int id);

    //查询所有用户
    QList<UserInfo> getAllUser();

    //查询用户名是否存在
    bool isExit(QString strUser);

    //更新用户信息
    bool updateUser(UserInfo info, QString username);

    //添加单个用户
    bool addUser(UserInfo info);

    //删除单个用户
    bool delUser(QString strUserName);

signals:

private:
    QSqlDatabase m_db;
};

#endif // STUSQL_H
