#include "bird.h"

Bird::Bird(QWidget *parent) : QWidget{parent}
{
    //加载鸟所有图标资源
    for(int i = 0; i < this->max;i++)
    {
        QString str = QString(":/Image/bird%1").arg(i+1);
        this->m_Bird_Pix.load(str);
    }

    //设置鸟尺寸
    this->setFixedSize(this->m_Bird_Pix.width(),this->m_Bird_Pix.height());

    //创建定时器对象
    this->timer = new QTimer(this);

    //监听定时器的信号
    connect(timer,&QTimer::timeout,[=](){
        QString str = QString(":/Image/bird%1").arg(this->min++);
        this->m_Bird_Pix.load(str);
        if(this->min>this->max)
        {
            this->min=1;
        }

        //抛出自定义信号
        emit changePix();
    });

    //菜单创建
    this->m_Menu = new QMenu();

    //连接菜单中退出选项的信号槽
    connect(this->m_Menu->addAction("退出"),&QAction::triggered,[=](){
        exit(0);
    });
}

void Bird::running()
{
    this->timer->start(50);
}

void Bird::mousePressEvent(QMouseEvent *event)
{
    //鼠标按下的时候  记录分量
    //((QWidget*)this->parent())->frameGeometry().topLeft()  获取当前窗口的左上角的坐标
    this->m_Pos = event->globalPos() - ((QWidget*)this->parent())->frameGeometry().topLeft();

    //鼠标按下的状态为真
    this->mouseDown = true;

    //如果是鼠标右键  弹出菜单
    if(event->button() == Qt::RightButton)
    {
        //弹出菜单 弹的位置和鼠标当前位置一致
        this->m_Menu->popup(QCursor::pos());
    }

    //如果退出菜单 通过别的方式消失的，小鸟应该继续向前飞
    connect(this->m_Menu,&QMenu::aboutToHide,[=](){
        this->mouseDown = false;
    });
}

void Bird::mouseMoveEvent(QMouseEvent *event)
{
    //在移动过程中 反向获取到 窗口最终移动的位置
    emit this->moving(event->globalPos() - this->m_Pos);
}

void Bird::mouseReleaseEvent(QMouseEvent *event)
{
    //鼠标按下的状态为真
    this->mouseDown = false;
}


