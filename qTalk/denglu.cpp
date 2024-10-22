#include "denglu.h"
#include "ui_denglu.h"
#include <QIcon>
#include <QMessageBox>
#include <QToolButton>
#include "widget.h"
denglu::denglu(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::denglu)
{
    ui->setupUi(this);

    //设置图标
    this->setWindowIcon(QIcon(":/images/qq.png"));
    //设置名称
    this->setWindowTitle("qTalk");
    QStringList heroName;
    heroName << "熬夜波比"<<"大头"<<"剑魔"<<"石头人"<<"维鲁斯"<<"小火龙"<<"月男";

    QVector<QToolButton*> vector;
    for(int i=0;i<7;i++)
    {
        QToolButton* btn = new QToolButton(this);
        //加载图标
        btn->setIcon(QPixmap(QString(":/images/%1.png").arg(i+1)));
        //设置图片大小
        // btn->setIconSize(QPixmap(QString(":/images/%1.png").arg(i+1)).size());
        btn->setIconSize(QSize(80,80));

        //设置网名
        btn->setText(QString("%1").arg(heroName[i]));
        //设置透明
        btn->setAutoRaise(true);
        //设置图片和文字一起显示
        btn->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        //放到vlayout布局中
        ui->vlayout->addWidget(btn);
        vector.push_back(btn);
        IsShow.push_back(false);
    }
    for(int i=0;i<7;i++)
    {
        connect(vector[i],&QToolButton::clicked,[=](){
            if(IsShow[i])
            {
                QMessageBox::warning(this,"警告","该聊天框已被打开");
                return;
            }
            IsShow[i] = true;
            Widget* widget = new Widget(nullptr,vector[i]->text());
            widget->setWindowIcon(vector[i]->icon());
            widget->setWindowTitle(vector[i]->text());
            widget->show();
            //关闭时将对应的IsShow变为false；
            connect(widget,&Widget::closeWidget,this,[=](){
                IsShow[i]=false;
            });

        });
    }
}

denglu::~denglu()
{
    delete ui;
}
