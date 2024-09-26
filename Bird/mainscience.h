#ifndef MAINSCIENCE_H
#define MAINSCIENCE_H

#include <QWidget>
#include "bird.h"
#include <QTimer>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainScience;
}
QT_END_NAMESPACE

class MainScience : public QWidget
{
    Q_OBJECT

public:
    MainScience(QWidget *parent = nullptr);
    ~MainScience();

    //鸟对象指针
    Bird* m_Bird;

    //重写绘图事件
    void paintEvent(QPaintEvent *event);

    //记录自动移动的位置
    QPoint m_Auto_Pos;

    //自动移动定时器
    QTimer* timer;

private:
    Ui::MainScience *ui;
};
#endif // MAINSCIENCE_H
