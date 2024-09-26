#include "mainscene.h"
#include "config.h"
#include <QPainter>
#include <QMouseEvent>
#include <QDebug>
#include <QSoundEffect>
MainScene::MainScene(QWidget *parent)
    : QWidget(parent)
{
    //调用初始化场景
    initScene();
    //启动游戏
    playGame();
}



//初始化场景
void MainScene::initScene()
{
    //设置窗口固定尺寸
    setFixedSize(GAME_WIDTH,GAME_HEIGHT);
    //设置标题
    setWindowTitle(GAME_TITLE);
    //加载图标
    setWindowIcon(QIcon(GAME_ICON));
    //定时器设置
    m_Timer.setInterval(GAME_RATE);
    //敌机出场时间间隔  初始化
    m_recorder=0;
    //随机数种子
    srand((unsigned int)time(NULL));

}

void MainScene::playGame()
{
    //启动背景音乐
    QSoundEffect * startSound = new QSoundEffect(this);
    startSound->setSource(QUrl::fromLocalFile(SOUND_BACKGROUND));
    startSound->play();

    //加载爆炸音效
    bombSound = new QSoundEffect(this);
    bombSound->setSource(QUrl::fromLocalFile(SOUND_BOMB));
    bombSound->setVolume(0.3f);

    //启动定时器
    m_Timer.start();

    //监听定时器发送的信号
    connect(&m_Timer,&QTimer::timeout,[=](){
        //敌机出场
        enemyToScene();
        //更新游戏中元素的坐标位置
        updatePosition();
        //绘制到屏幕中
        update();
        //碰撞检测
        collisionDetection();
    });
}

void MainScene::updatePosition()
{
    //更新地图坐标
    m_map.mapPosition();

    //发射子弹
    m_hero.shoot();

    //计算所有非空闲子弹的当前坐标
    for(int i = 0;i < BULLET_NUM;i++)
    {
        //如果非空闲，计算发射位置
        if(m_hero.m_bullets[i].m_Free == false)
        {
            m_hero.m_bullets[i].updatePosition();
        }
    }

    //敌机出场
    for(int i = 0;i < ENEMY_NUM;i++)
    {
        //如果非空闲，计算发射位置
        if(m_enemys[i].m_Free == false)
        {
            m_enemys[i].updatePosition();
        }
    }

    //计算爆炸的播放的图片
    for(int i = 0;i<BOMB_NUM;i++)
    {
        if(m_bombs[i].m_Free == false)
        {
            m_bombs[i].updateInfo();
        }
    }
}

void MainScene::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);

    //绘制地图
    painter.drawPixmap(0,m_map.m_map1_pos_Y,m_map.m_map1);
    painter.drawPixmap(0,m_map.m_map2_pos_Y,m_map.m_map2);

    //绘制英雄飞机
    painter.drawPixmap(m_hero.m_X,m_hero.m_Y,m_hero.m_Plane);

    //绘制子弹
    for(int i = 0;i < BULLET_NUM;i++)
    {
        //如果非空闲，绘制
        if(m_hero.m_bullets[i].m_Free == false)
        {
            painter.drawPixmap(m_hero.m_bullets[i].m_X,m_hero.m_bullets[i].m_Y,m_hero.m_bullets[i].m_Bullet);
        }
    }

    //绘制敌机
    for(int i = 0;i < ENEMY_NUM;i++)
    {
        //如果非空闲，绘制
        if(m_enemys[i].m_Free == false)
        {
            painter.drawPixmap(m_enemys[i].m_X,m_enemys[i].m_Y,m_enemys[i].m_enemy);
        }
    }

    //绘制爆炸
    for(int i = 0;i<BOMB_NUM;i++)
    {
        if(m_bombs[i].m_Free == false)
        {
            // qDebug()<<"第"<<i<<"个炸弹"<<"执行图片"<<m_bombs[i].m_index<<"爆炸"<<m_bombs[i].m_pixArr.size();
            painter.drawPixmap(m_bombs[i].m_X,m_bombs[i].m_Y,
                               m_bombs[i].m_pixArr[m_bombs[i].m_index]);
        }
    }
}

void MainScene::mouseMoveEvent(QMouseEvent *event)
{
    int x = event->x() - m_hero.m_Rect.width()*0.5;
    int y = event->y() - m_hero.m_Rect.height()*0.5;

    //边界检测
    if(x<=0)
    {
        x=0;
    }
    if(x>=GAME_WIDTH - m_hero.m_Rect.width())
    {
        x = GAME_WIDTH - m_hero.m_Rect.width();
    }
    if(y <= 0)
    {
        y = 0;
    }
    if(y >= GAME_HEIGHT - m_hero.m_Rect.height())
    {
        y = GAME_HEIGHT - m_hero.m_Rect.height();
    }

    m_hero.setPosition(x,y);
}

void MainScene::enemyToScene()
{
    m_recorder++;
    //未达到出场的间隔，直接return
    if(m_recorder < ENEMY_INTERVAL)
    {
        return;
    }
    m_recorder=0;
    for(int i = 0;i < ENEMY_NUM;i++)
    {
        //如果空闲，出场
        if(m_enemys[i].m_Free)
        {
            m_enemys[i].m_Free = false;
            m_enemys[i].m_Y = -m_enemys[i].m_Rect.height();
            m_enemys[i].m_X = rand() % (GAME_WIDTH-m_enemys[i].m_Rect.width());
            break;
        }
    }
}

void MainScene::collisionDetection()
{

    //遍历所有非空闲敌机
    for(int i = 0;i < ENEMY_NUM;i++)
    {
        //如果是空闲飞机，执行下一次循环
        if(m_enemys[i].m_Free)
        {
            continue;
        }
        for(int j = 0;j < BULLET_NUM;j++)
        {
            //如果是空闲子弹，执行下一次循环
            if(m_hero.m_bullets[j].m_Free)
            {
                continue;
            }

            //如果子弹和飞机相交，发生碰撞，同时将飞机和子弹空闲状态设置为真
            if(m_enemys[i].m_Rect.intersects(m_hero.m_bullets[j].m_Rect))
            {
                m_enemys[i].m_Free = true;
                m_hero.m_bullets[j].m_Free = true;

                //播放爆炸效果
                for(int k = 0;k < BOMB_NUM;k++)
                {
                    if(m_bombs[k].m_Free)
                    {
                        bombSound->play();
                        //空闲的爆炸，可以播放爆炸了
                        m_bombs[k].m_Free = false;
                        //更新爆炸坐标
                        m_bombs[k].m_X = m_enemys[i].m_X;
                        m_bombs[k].m_Y = m_enemys[i].m_Y;
                        break;
                    }
                }
            }
        }
    }
}


MainScene::~MainScene()
{

}
