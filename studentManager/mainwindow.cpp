#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFile>
#include <QKeyEvent>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , m_ptrStuSql(nullptr)
{
    ui->setupUi(this);

    //加载qss文件设置样式
    QFile f;
    f.setFileName(":/qss/dlg.css");
    f.open(QIODevice::ReadOnly);
    QString strQss = f.readAll();
    m_dlgLogin.setStyleSheet(strQss);
    f.close();

    f.setFileName(":/qss/main.css");
    f.open(QIODevice::ReadOnly);
    strQss = f.readAll();
    this->setStyleSheet(strQss);


    m_dlgLogin.show();
    connect(&m_dlgLogin,&Page_Login::sendLoginSuccess,this,[=](QString username, stuSql* m_Sql){
        this->show();
        ui->lb_user->setText(username);
        //传递过来数据库对象
        m_ptrStuSql = m_Sql;
        updateTable();

    });

    //左侧设计
    ui->treeWidget->setColumnCount(1);

    QTreeWidgetItem *pf = new QTreeWidgetItem(ui->treeWidget,QStringList("学生管理系统"));
    QTreeWidgetItem *p1 = new QTreeWidgetItem(pf,QStringList("学生管理"));
    QTreeWidgetItem *p2 = new QTreeWidgetItem(pf,QStringList("管理员管理"));
    pf->addChild(p1);
    pf->addChild(p2);
    //默认设置为打开分支
    ui->treeWidget->expandAll();
    //设置默认展示第一个界面
    ui->stackedWidget->setCurrentIndex(0);
    //设置点击切换展示页
    void(QTreeWidget::* tw)(QTreeWidgetItem*,int) = &QTreeWidget::itemClicked;
    connect(ui->treeWidget,tw,[=](){
        int index = ui->treeWidget->currentIndex().row();
        ui->stackedWidget->setCurrentIndex(index);
        updateTable2();
    });


}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::saveName()
{
    //存储名字数组
    m_lNames<<"蚁兰芳";
    m_lNames<<"哀伟毅";
    m_lNames<<"折翠丝";
    m_lNames<<"幸智明";
    m_lNames<<"融紫安";
    m_lNames<<"松俊艾";
    m_lNames<<"果嘉祯";
    m_lNames<<"风俊杰";
    m_lNames<<"招寒雁";
    m_lNames<<"壬寻凝";
    m_lNames<<"世灵松";
    m_lNames<<"户梦之";
    m_lNames<<"桂文宣";
    m_lNames<<"修玲珑";
    m_lNames<<"针云韶";
    m_lNames<<"贰开朗";
    m_lNames<<"告星海";
    m_lNames<<"仍云飞";
    m_lNames<<"连华采";
    m_lNames<<"苌恬谧";
    m_lNames<<"法乃心";
    m_lNames<<"畅茂实";
    m_lNames<<"士乐家";
    m_lNames<<"盘湛静";
    m_lNames<<"哈怀蕾";
    m_lNames<<"郝雨琴";
    m_lNames<<"蒲华芝";
    m_lNames<<"铁觅山";
    m_lNames<<"阚新荣";
    m_lNames<<"鄂映秋";
    m_lNames<<"贺春柔";
    m_lNames<<"义晶滢";
    m_lNames<<"臧凌青";
    m_lNames<<"苗听春";
    m_lNames<<"闫元嘉";
    m_lNames<<"谭凡双";
    m_lNames<<"邬春晖";
    m_lNames<<"惠水丹";
    m_lNames<<"黄雅宁";
    m_lNames<<"及雁蓉";
    m_lNames<<"贸萦怀";
    m_lNames<<"郸暖暖";
    m_lNames<<"来惜雪";
    m_lNames<<"星亦凝";
    m_lNames<<"宜玮奇";
    m_lNames<<"蹇安静";
    m_lNames<<"迟建中";
    m_lNames<<"丘雅安";
    m_lNames<<"夙长文";
    m_lNames<<"汪宵月";
    m_lNames<<"泉绿夏";
    m_lNames<<"洛语梦";
    m_lNames<<"佘天菱";
    m_lNames<<"紫瑾瑶";
    m_lNames<<"靖梅风";
    m_lNames<<"车新儿";
    m_lNames<<"濮俊民";
    m_lNames<<"剧凯唱";
    m_lNames<<"历梅花";
    m_lNames<<"汝楚洁";
    m_lNames<<"贝鸿晖";
    m_lNames<<"厍巧曼";
    m_lNames<<"祭雁风";
    m_lNames<<"柏安然";
    m_lNames<<"遇傲南";
    m_lNames<<"衡映天";
    m_lNames<<"独曼云";
    m_lNames<<"楚曼冬";
    m_lNames<<"杞又夏";
    m_lNames<<"曾芳茵";
    m_lNames<<"税雨竹";
    m_lNames<<"抗莞然";
    m_lNames<<"盖易绿";
    m_lNames<<"褚孟阳";
    m_lNames<<"朱叶帆";
    m_lNames<<"杜湛芳";
    m_lNames<<"丙俊语";
    m_lNames<<"穆秀越";
    m_lNames<<"皇嘉年";
    m_lNames<<"綦飞驰";
    m_lNames<<"徭秋芸";
    m_lNames<<"翦泰初";
    m_lNames<<"宏丰茂";
    m_lNames<<"友妙晴";
    m_lNames<<"姓思茵";
    m_lNames<<"胡友易";
    m_lNames<<"钟惠心";
    m_lNames<<"栾驰翰";
    m_lNames<<"盛诗霜";
    m_lNames<<"汤梓彤";
    m_lNames<<"丑夏旋";
    m_lNames<<"姬绮烟";
    m_lNames<<"贲飞航";
    m_lNames<<"藩虹英";
    m_lNames<<"竭星睿";
    m_lNames<<"彭丁辰";
    m_lNames<<"校孤松";
    m_lNames<<"碧傲菡";
    m_lNames<<"谷慧艳";
    m_lNames<<"邹碧巧";
    m_lNames<<"鱼惜玉";
    m_lNames<<"求浩淼";
    m_lNames<<"查梦凡";
    m_lNames<<"红绢子";
    m_lNames<<"郜绮怀";
    m_lNames<<"阴静云";
    m_lNames<<"吕雅畅";
    m_lNames<<"己慧巧";
    m_lNames<<"考秀杰";
    m_lNames<<"应鸿煊";
    m_lNames<<"曹丽珠";
    m_lNames<<"充平安";
    m_lNames<<"留天巧";
    m_lNames<<"昔笑萍";
    m_lNames<<"智慕雁";
    m_lNames<<"檀访天";
    m_lNames<<"欧碧白";
    m_lNames<<"锐忆南";
    m_lNames<<"睢念文";
    m_lNames<<"唐平和";
    m_lNames<<"须令锋";
    m_lNames<<"戏优乐";
    m_lNames<<"旗从丹";
    m_lNames<<"实瀚玥";
    m_lNames<<"合依白";
    m_lNames<<"狄振国";
    m_lNames<<"贡秋巧";
    m_lNames<<"柴新柔";
    m_lNames<<"支乐芸";
    m_lNames<<"佟慕雁";
    m_lNames<<"行安和";
    m_lNames<<"冼凝静";
    m_lNames<<"摩优悠";
    m_lNames<<"傅念梦";
    m_lNames<<"秘晓蕾";
    m_lNames<<"郭韦曲";
    m_lNames<<"刘迎梅";
    m_lNames<<"巢湘灵";
    m_lNames<<"让才哲";
    m_lNames<<"龙立辉";
    m_lNames<<"达映菱";
    m_lNames<<"赏妙菡";
    m_lNames<<"平琳晨";
    m_lNames<<"江秀艾";
    m_lNames<<"开乐贤";
    m_lNames<<"敖清逸";
    m_lNames<<"前静秀";
    m_lNames<<"宛依波";
    m_lNames<<"凤晗日";
    m_lNames<<"潭问柳";
    m_lNames<<"管瑶岑";
    m_lNames<<"保璇玑";
    m_lNames<<"解英资";
    m_lNames<<"伦流婉";
    m_lNames<<"揭静婉";
    m_lNames<<"宿秋灵";
    m_lNames<<"蒙雅云";
    m_lNames<<"危娅静";
    m_lNames<<"盈香芹";
    m_lNames<<"狂旻骞";
    m_lNames<<"经涵阳";
    m_lNames<<"归小珍";
    m_lNames<<"念清芬";
    m_lNames<<"字寄云";
    m_lNames<<"羊秋白";
    m_lNames<<"丹小枫";
    m_lNames<<"姜哲思";
    m_lNames<<"涂雅蕊";
    m_lNames<<"却含莲";
    m_lNames<<"刚阳德";
    m_lNames<<"冉忆安";
    m_lNames<<"飞千亦";
    m_lNames<<"乔如心";
    m_lNames<<"香英卓";
    m_lNames<<"释思洁";
    m_lNames<<"叔晓霜";
    m_lNames<<"陶华彩";
    m_lNames<<"旁鸿轩";
    m_lNames<<"可香薇";
    m_lNames<<"文帅红";
    m_lNames<<"耿经纬";
    m_lNames<<"季明智";
    m_lNames<<"濯迎彤";
    m_lNames<<"贯尔阳";
    m_lNames<<"苍沛柔";
    m_lNames<<"席惜芹";
    m_lNames<<"官佳悦";
    m_lNames<<"籍平良";
    m_lNames<<"滕幼丝";
    m_lNames<<"苏初阳";
    m_lNames<<"嘉恨之";
    m_lNames<<"翠兴思";
    m_lNames<<"库尔雅";
    m_lNames<<"本岚彩";
    m_lNames<<"郎天空";
    m_lNames<<"戴慕梅";
    m_lNames<<"市炫明";
    m_lNames<<"戊涵畅";
    m_lNames<<"逢浓绮";
    m_lNames<<"姒沛春";
}
void MainWindow::keyPressEvent(QKeyEvent *event)
{
    // 按f6加载皮肤样式

    // if(event->key() == Qt::Key_F6)
    // {
    //     QFile f;
    //     auto str = QCoreApplication::applicationDirPath();
    //     f.setFileName(str+"//"+"stuqss.css");
    //     f.open(QIODevice::ReadOnly);
    //     QString strQss = f.readAll();
    //     this->setStyleSheet(strQss);
    //     m_dlgLogin.setStyleSheet(strQss);
    // }
}

void MainWindow::on_btn_exit_clicked()
{
    exit(0);
}


void MainWindow::on_btn_simulation_clicked()
{
    StuInfo info;
    saveName();
    QList<StuInfo> l;
    for(int i=0;i<m_lNames.size();i++)
    {
        info.name=m_lNames[i];
        if(i%3)
        {
            info.age = 16;
        }
        if(i%7)
        {
            info.age = 17;
        }
        if(i%2)
        {
            info.age = 18;
        }
        info.grade = rand()%3 + 1;
        info.uiclass = rand()%24 + 1;
        info.studentid = i + 1;
        info.phone = "13275568994";
        info.wechat = "13275568994";
        l.append(info);
    }
    m_ptrStuSql->addStu(l);
    updateTable();
}


void MainWindow::on_btn_add_clicked()
{
    //添加，不用提供学生信息
    m_dlgAddStu.setType(true);
    m_dlgAddStu.exec();
    updateTable();
}


void MainWindow::on_btn_clear_clicked()
{
    m_ptrStuSql->clearStuTable();
    updateTable();
}

void MainWindow::updateTable()
{
    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(9);
    QStringList l;
    l<<"序号"<<"学生id"<<"姓名"<<"年龄"<<"年级"<<"班级"<<"学号"<<"电话"<<"微信";
    ui->tableWidget->setHorizontalHeaderLabels(l);
    //设置只能选中行,按住ctrl可以选中多行
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    //只能选中一行
    // ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    //设置不能编辑
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);


    auto cnt = m_ptrStuSql->getStuCnt();
    ui->lb_cnt->setText(QString("学生总数:%1").arg(cnt));
    QList<StuInfo> lStudents = m_ptrStuSql->getPageStu(0,cnt);

    ui->tableWidget->setRowCount(cnt);
    for(int i = 0;i<lStudents.size();i++)
    {
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(QString::number(i+1)));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(QString::number(lStudents[i].id)));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(lStudents[i].name));
        ui->tableWidget->setItem(i,3,new QTableWidgetItem(QString::number(lStudents[i].age)));
        ui->tableWidget->setItem(i,4,new QTableWidgetItem(QString::number(lStudents[i].grade)));
        ui->tableWidget->setItem(i,5,new QTableWidgetItem(QString::number(lStudents[i].uiclass)));
        ui->tableWidget->setItem(i,6,new QTableWidgetItem(QString::number(lStudents[i].studentid)));
        ui->tableWidget->setItem(i,7,new QTableWidgetItem(lStudents[i].phone));
        ui->tableWidget->setItem(i,8,new QTableWidgetItem(lStudents[i].wechat));
    }
    //居中显示
    tableWidgetCenter();
}
void MainWindow::tableWidgetCenter()
{
    //内容居中显示
    int nCount = ui->tableWidget->rowCount();
    int nClumn = ui->tableWidget->columnCount();
    for (int n = 0; n < nCount;n++)
    {
        for (int m = 0; m < nClumn ;m++)
        {
            ui->tableWidget->item(n,m)->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        }
    }
    //设置单元格比例
    int column_count = ui->tableWidget->columnCount();
    // 设置列宽比例, 假设希望第1列占40%,第2列占30%,第3列占30%
    double width_ratios[9] = {1.0 / column_count, 1.0 / column_count, 1.0 / column_count, 1.0 / column_count,
                              1.0 / column_count, 1.0 / column_count, 1.0 / column_count, 1.0 / column_count,
                              1.0 / column_count};
    for (int i = 0; i < column_count; i++) {
        int column_width = static_cast<int>(ui->tableWidget->width() * width_ratios[i]);
        ui->tableWidget->setColumnWidth(i, column_width);
    }
    // 设置表格自动调整大小模式为等比例缩放
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

void MainWindow::tableWidget_2Center()
{
    //内容居中显示
    int nCount = ui->tableWidget_2->rowCount();
    int nClumn = ui->tableWidget_2->columnCount();
    for (int n = 0; n < nCount;n++)
    {
        for (int m = 0; m < nClumn ;m++)
        {
            ui->tableWidget_2->item(n,m)->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        }
    }
    //设置单元格比例
    int column_count = ui->tableWidget_2->columnCount();
    // 设置列宽比例
    double width_ratios[3] = {1.0 / column_count, 1.0 / column_count, 1.0 / column_count};
    for (int i = 0; i < column_count; i++) {
        int column_width = static_cast<int>(ui->tableWidget_2->width() * width_ratios[i]);
        ui->tableWidget_2->setColumnWidth(i, column_width);
    }
    // 设置表格自动调整大小模式为等比例缩放
    ui->tableWidget_2->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

void MainWindow::on_btn_delete_clicked()
{
    int i = ui->tableWidget->currentRow();
    if(i>=0)
    {
        int id = ui->tableWidget->item(i,1)->text().toUInt();
        m_ptrStuSql->delStu(id);
        updateTable();
        QMessageBox::information(nullptr,"信息","删除成功");
    }
}


void MainWindow::on_btn_update_clicked()
{
    StuInfo info;
    int i = ui->tableWidget->currentRow();
    if(i>=0)
    {
        info.id = ui->tableWidget->item(i,1)->text().toUInt();
        info.name = ui->tableWidget->item(i,2)->text();
        info.age = ui->tableWidget->item(i,3)->text().toUInt();
        info.grade = ui->tableWidget->item(i,4)->text().toUInt();
        info.uiclass = ui->tableWidget->item(i,5)->text().toUInt();
        info.studentid = ui->tableWidget->item(i,6)->text().toUInt();
        info.phone = ui->tableWidget->item(i,7)->text();
        info.wechat = ui->tableWidget->item(i,8)->text();

        m_dlgAddStu.setType(false,info);
        m_dlgAddStu.exec();
        updateTable();
    }

}


void MainWindow::on_btn_search_clicked()
{
    QString strFilter = ui->le_search->text();
    if(strFilter.isEmpty())
    {
        QMessageBox::information(nullptr,"警告","名字筛选为空");
        updateTable();
        return;
    }
    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(9);
    QStringList l;
    l<<"序号"<<"学生id"<<"姓名"<<"年龄"<<"年级"<<"班级"<<"学号"<<"电话"<<"微信";
    ui->tableWidget->setHorizontalHeaderLabels(l);

    auto cnt = m_ptrStuSql->getStuCnt();
    ui->lb_cnt->setText(QString("学生总数:%1").arg(cnt));
    QList<StuInfo> lStudents = m_ptrStuSql->getPageStu(0,cnt);


    int index = 0;
    for(int i = 0;i<lStudents.size();i++)
    {
        if(!lStudents[i].name.contains(strFilter))
        {
            continue;
        }
        index++;
    }
    ui->tableWidget->setRowCount(index);

    index = 0;
    for(int i = 0;i<lStudents.size();i++)
    {
        if(!lStudents[i].name.contains(strFilter))
        {
            continue;
        }
        ui->tableWidget->setItem(index,0,new QTableWidgetItem(QString::number(index+1)));
        ui->tableWidget->setItem(index,1,new QTableWidgetItem(QString::number(lStudents[i].id)));
        ui->tableWidget->setItem(index,2,new QTableWidgetItem(lStudents[i].name));
        ui->tableWidget->setItem(index,3,new QTableWidgetItem(QString::number(lStudents[i].age)));
        ui->tableWidget->setItem(index,4,new QTableWidgetItem(QString::number(lStudents[i].grade)));
        ui->tableWidget->setItem(index,5,new QTableWidgetItem(QString::number(lStudents[i].uiclass)));
        ui->tableWidget->setItem(index,6,new QTableWidgetItem(QString::number(lStudents[i].studentid)));
        ui->tableWidget->setItem(index,7,new QTableWidgetItem(lStudents[i].phone));
        ui->tableWidget->setItem(index,8,new QTableWidgetItem(lStudents[i].wechat));
        index++;
    }
    // ui->tableWidget->setRowCount(index);
    //居中显示
    tableWidgetCenter();
}

//-------------------------------------------管理员界面--------------------------------------

void MainWindow::updateTable2()
{
    ui->tableWidget_2->clear();
    ui->tableWidget_2->setColumnCount(3);
    QStringList l;
    l<<"用户名"<<"密码"<<"权限";
    ui->tableWidget_2->setHorizontalHeaderLabels(l);
    //设置只能选中行,按住ctrl可以选中多行
    ui->tableWidget_2->setSelectionBehavior(QAbstractItemView::SelectRows);
    //只能选中一行
    // ui->tableWidget_2->setSelectionMode(QAbstractItemView::SingleSelection);
    //设置不能编辑
    ui->tableWidget_2->setEditTriggers(QAbstractItemView::NoEditTriggers);

    //获取全部的用户信息
    QList<UserInfo> lu = m_ptrStuSql->getAllUser();

    ui->lb_cnt_2->setText(QString("用户总数:%1").arg(lu.size()));

    ui->tableWidget_2->setRowCount(lu.size());
    for(int i = 0;i<lu.size();i++)
    {
        ui->tableWidget_2->setItem(i,0,new QTableWidgetItem(lu[i].username));
        ui->tableWidget_2->setItem(i,1,new QTableWidgetItem(lu[i].password));
        ui->tableWidget_2->setItem(i,2,new QTableWidgetItem(lu[i].auth));
    }
    tableWidget_2Center();
}

//添加用户
void MainWindow::on_btn_add_2_clicked()
{
    //添加，不用提供用户信息
    m_dlgAddUser.setType(true);
    m_dlgAddUser.exec();
    updateTable2();
}

//删除用户
void MainWindow::on_btn_delete_2_clicked()
{
    int i = ui->tableWidget_2->currentRow();
    if(i>=0)
    {
        QString username = ui->tableWidget_2->item(i,0)->text();
        m_ptrStuSql->delUser(username);
        updateTable2();
        QMessageBox::information(nullptr,"信息","删除成功");
    }
}

//更新用户
void MainWindow::on_btn_update_2_clicked()
{
    UserInfo info;
    int i = ui->tableWidget_2->currentRow();
    if(i>=0)
    {
        info.username = ui->tableWidget_2->item(i,0)->text();
        info.password = ui->tableWidget_2->item(i,1)->text();
        info.auth = ui->tableWidget_2->item(i,2)->text();

        m_dlgAddUser.setType(false,info);
        m_dlgAddUser.exec();
        updateTable2();
    }

}

//模拟数据——添加一部分用户用于测试
void MainWindow::on_btn_simulation_2_clicked()
{
    UserInfo info;

    for(int i=1;i<10;i++)
    {
        info.username = QString("admin%1").arg(i);
        if(i%3)
        {
            info.password = "161514";
            info.auth = "p46";
        }
        if(i%5)
        {
            info.password = "171819";
            info.auth = "p45";
        }
        if(i%2)
        {
            info.password = "181312";
            info.auth = "p42";
        }
        m_ptrStuSql->addUser(info);
    }
    updateTable2();
}

//根据名字搜索用户
void MainWindow::on_btn_search_2_clicked()
{
    QString strFilter = ui->le_search_2->text();
    if(strFilter.isEmpty())
    {
        QMessageBox::information(nullptr,"警告","用户名筛选为空");
        updateTable2();
        return;
    }
    ui->tableWidget_2->clear();
    ui->tableWidget_2->setColumnCount(3);
    QStringList l;
    l<<"用户名"<<"密码"<<"权限";
    ui->tableWidget_2->setHorizontalHeaderLabels(l);

    QList<UserInfo> lUser = m_ptrStuSql->getAllUser();
    ui->lb_cnt_2->setText(QString("用户总数:%1").arg(lUser.size()));

    int index = 0;
    for(int i = 0;i<lUser.size();i++)
    {
        if(!lUser[i].username.contains(strFilter))
        {
            continue;
        }
        index++;
    }
    ui->tableWidget_2->setRowCount(index);

    index = 0;
    for(int i = 0;i<lUser.size();i++)
    {
        if(!lUser[i].username.contains(strFilter))
        {
            continue;
        }
        ui->tableWidget_2->setItem(index,0,new QTableWidgetItem(lUser[i].username));
        ui->tableWidget_2->setItem(index,1,new QTableWidgetItem(lUser[i].password));
        ui->tableWidget_2->setItem(index,2,new QTableWidgetItem(lUser[i].auth));
        index++;
    }
    // ui->tableWidget_2->setRowCount(index);
    tableWidget_2Center();
}

