#ifndef WIDGET_H
#define WIDGET_H
#include <QUdpSocket>
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    enum Msgtype{Msg,UserEnter,UserLeft};//枚举  分别代表  普通信息  用户进入  用户离开
    explicit Widget(QWidget *parent, QString name);

    void sndMsg(Msgtype type);//广播udp消息
    QString getName();//获取名字
    QString getMsg();//获取聊天信息
    void userEnter(QString username);//处理用户进入
    void userLeft(QString username,QString time);//处理用户离开
    void ReceiveMessage();//接收UDP消息
    ~Widget();

private:
    Ui::Widget *ui;
    quint16 port;//端口
    QString m_Name;//名字
    QUdpSocket* udpSocket;//udp 套接字
signals:
    void closeWidget();

public:
    //重写关闭事件
    void closeEvent(QCloseEvent *event);
};
#endif // WIDGET_H
