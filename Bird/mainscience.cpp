#include "mainscience.h"
#include "ui_mainscience.h"
#include <QPainter>
#include <QTimer>
#include <QScreen>
MainScience::MainScience(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainScience)
{
    ui->setupUi(this);

    //设置图标
    this->setWindowIcon(QIcon(":/Image/birdicon.ico"));

    //创建鸟对象
    this->m_Bird = new Bird;
    //将鸟对象显示到窗口中
    this->m_Bird->setParent(this);
    //设置窗口尺寸
    this->setFixedSize(this->m_Bird->width(),this->m_Bird->height());

    //启动鸟飞翔的动画
    this->m_Bird->running();

    //监听鸟切图信号
    connect(this->m_Bird,&Bird::changePix,[=](){
        update();
    });

    //监听鸟拖拽移动的信号
    connect(this->m_Bird,&Bird::moving,[=](QPoint point){
        this->move(point);

        m_Auto_Pos = point;  //鼠标拖拽的时候，更新当前窗口的位置
    });

    //创建定时器对象
    this->timer = new QTimer(this);

    //启动定时器
    this->timer->start(30);

    //获取屏幕
    QScreen* screen = QGuiApplication::primaryScreen();
    QRect rect = screen->geometry();
    //监听定时器
    connect(timer,&QTimer::timeout,[=](){
        if(this->m_Bird->mouseDown != true)
        {
            this->m_Auto_Pos.setX(this->m_Auto_Pos.x() + 5);

            if(this->m_Auto_Pos.x() > rect.size().width())
            {
                this->m_Auto_Pos.setX(-this->width());
            }
        }
        //窗口同步移动
        this->move(this->m_Auto_Pos);
    });

    //去掉标题栏
    this->setWindowFlags(Qt::FramelessWindowHint);

    //设置透明窗口  120号属性
    this->setAttribute(Qt::WA_TranslucentBackground);

    //设置窗口顶层
    this->setWindowFlags(this->windowFlags() | Qt::WindowStaysOnTopHint);

    //设置起始Y位置
    this->m_Auto_Pos.setY(rect.size().height()*0.3 -this->m_Bird->height());
}

MainScience::~MainScience()
{
    delete ui;
}

void MainScience::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);

    painter.drawPixmap(0,0,this->m_Bird->m_Bird_Pix);
}
