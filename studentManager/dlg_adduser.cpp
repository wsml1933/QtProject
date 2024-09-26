#include "dlg_adduser.h"
#include "ui_dlg_adduser.h"
#include <QMessageBox>
Dlg_AddUser::Dlg_AddUser(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dlg_AddUser)
{
    ui->setupUi(this);
}

Dlg_AddUser::~Dlg_AddUser()
{
    delete ui;
}
void Dlg_AddUser::setType(bool isAdd, UserInfo info)
{
    m_isAdd = isAdd;
    m_info = info;
    ui->le_username->setText(info.username);
    //若是修改则设置username为不可编辑状态
    ui->le_username->setEnabled(m_isAdd);
    ui->le_password->setText(info.password);
    ui->le_auth->setText(info.auth);
    m_username = info.username;
}

void Dlg_AddUser::on_btn_save_clicked()
{
    UserInfo info;
    auto ptr = stuSql::getinstance();
    info.username = ui->le_username->text();
    info.password = ui->le_password->text();
    info.auth = ui->le_auth->text();
    if(m_isAdd)
    {
        ptr->addUser(info);
        QMessageBox::information(nullptr,"信息","存储成功");
    }
    else
    {
        ptr->updateUser(info,m_username);
        QMessageBox::information(nullptr,"信息","修改成功");
    }
    this->hide();
}


void Dlg_AddUser::on_btn_cancel_clicked()
{
    this->hide();
}
