#ifndef DLG_ADDUSER_H
#define DLG_ADDUSER_H
#include "stusql.h"
#include <QDialog>

namespace Ui {
class Dlg_AddUser;
}

class Dlg_AddUser : public QDialog
{
    Q_OBJECT

public:
    explicit Dlg_AddUser(QWidget *parent = nullptr);
    ~Dlg_AddUser();
    void setType(bool isAdd, UserInfo info = {});
private slots:
    void on_btn_save_clicked();

    void on_btn_cancel_clicked();
private:
    Ui::Dlg_AddUser *ui;
    bool m_isAdd;
    UserInfo m_info;
    QString m_username;
};
#endif // DLG_ADDUSER_H
