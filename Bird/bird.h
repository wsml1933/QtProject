#ifndef BIRD_H
#define BIRD_H
#include <QPixmap>
#include <QWidget>
#include <QTimer>
#include <QMouseEvent>
#include <QMenu>
class Bird : public QWidget
{
    Q_OBJECT
public:
    explicit Bird(QWidget *parent = nullptr);

    //鸟显示图片
    QPixmap m_Bird_Pix;

    //最小值下标
    int min = 1;
    //最大值下标
    int max = 4;

    //定时器
    QTimer* timer;

    //执行动画
    void running();

    //记录分量坐标
    QPoint m_Pos;

    //鼠标按下事件
    void mousePressEvent(QMouseEvent *event);

    //鼠标移动事件
    void mouseMoveEvent(QMouseEvent *event);

    //鼠标释放事件
    void mouseReleaseEvent(QMouseEvent *event);

    //鼠标按下状态
    bool mouseDown = false;

    //右键菜单
    QMenu* m_Menu;
signals:
    //自定义信号  代表正在切换图片的信号
    void changePix();

    //自定义信号  代表拖拽后  主场景应该移动的位置
    void moving(QPoint point);
};

#endif // BIRD_H
