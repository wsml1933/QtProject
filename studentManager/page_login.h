#ifndef PAGE_LOGIN_H
#define PAGE_LOGIN_H
#include "stusql.h"
#include <QWidget>

namespace Ui {
class Page_Login;
}

class Page_Login : public QWidget
{
    Q_OBJECT

public:
    explicit Page_Login(QWidget *parent = nullptr);
    ~Page_Login();

private slots:
    void on_btn_login_clicked();

    void on_btn_exit_clicked();
signals:
    void sendLoginSuccess(QString username, stuSql* m_ptrStuSql);
private:
    Ui::Page_Login *ui;
    stuSql* m_ptrStuSql;
};

#endif // PAGE_LOGIN_H
