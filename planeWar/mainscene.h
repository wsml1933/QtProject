#ifndef MAINSCENE_H
#define MAINSCENE_H
#include "enemyplane.h"
#include <QWidget>
#include <QTimer>
#include "map.h"
#include "heroplane.h"
#include "bomb.h"
#include <QSoundEffect>
class MainScene : public QWidget
{
    Q_OBJECT

public:
    MainScene(QWidget *parent = nullptr);
    ~MainScene();

    //初始化场景
    void initScene();

    //启动游戏
    void playGame();

    //更新所有游戏中元素坐标
    void updatePosition();

    //绘制到屏幕中  函数名称不可改
    void paintEvent(QPaintEvent *event);

    //重写鼠标移动事件
    void mouseMoveEvent(QMouseEvent *event);

    //敌机出场
    void enemyToScene();

    //碰撞检测
    void collisionDetection();

    //地图对象
    Map m_map;

    //飞机对象
    HeroPlane m_hero;

    //敌机数组
    EnemyPlane m_enemys[ENEMY_NUM];

    //敌机出场间隔记录
    int m_recorder;
    //定时器
    QTimer m_Timer;
    //爆炸数组
    Bomb m_bombs[BOMB_NUM];
    //爆炸音效
    QSoundEffect * bombSound;
};
#endif // MAINSCENE_H
