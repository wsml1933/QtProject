#include "page_login.h"
#include "ui_page_login.h"

#include <QMessageBox>

Page_Login::Page_Login(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Page_Login)
    , m_ptrStuSql(nullptr)
{
    ui->setupUi(this);
    //初始化操作数据库类的指针
    m_ptrStuSql = stuSql::getinstance();
    //打开数据库,用指针前记得判空
    m_ptrStuSql->init();
}

Page_Login::~Page_Login()
{
    delete ui;
}

void Page_Login::on_btn_login_clicked()
{
    QString username = ui->le_user->text();
    QString password = ui->le_password->text();
    //数据库查找用户名和密码
    bool login = m_ptrStuSql->validateLogon(username, password);
    if(login)
    {
        this->hide();
        //成功进入主界面
        emit sendLoginSuccess(username,m_ptrStuSql);
    }
    else
    {
        //失败就提示
        QMessageBox::information(nullptr,"提示","用户名或密码错误");
    }
}


void Page_Login::on_btn_exit_clicked()
{
    //退出
    exit(0);
}

