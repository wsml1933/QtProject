#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "page_login.h"
#include <QMainWindow>
#include "stusql.h"
#include "dlg_addstu.h"
#include "dlg_adduser.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void keyPressEvent(QKeyEvent *event);
    void saveName();
    void tableWidgetCenter();
    void tableWidget_2Center();
private slots:
    void on_btn_exit_clicked();

    void on_btn_simulation_clicked();

    void on_btn_add_clicked();

    void on_btn_clear_clicked();
    void on_btn_delete_clicked();

    void on_btn_update_clicked();

    void on_btn_search_clicked();

    void on_btn_add_2_clicked();

    void on_btn_delete_2_clicked();

    void on_btn_update_2_clicked();

    void on_btn_simulation_2_clicked();

    void on_btn_search_2_clicked();

private:
    void updateTable();
    void updateTable2();
private:
    Ui::MainWindow *ui;
    Page_Login m_dlgLogin;
    stuSql* m_ptrStuSql;
    QStringList m_lNames;
    Dlg_AddStu m_dlgAddStu;
    Dlg_AddUser m_dlgAddUser;


};
#endif // MAINWINDOW_H
