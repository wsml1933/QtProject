#ifndef CONFIG_H
#define CONFIG_H

/************ 游戏配置数据 ***********/
#define GAME_WIDTH 512 //宽度
#define GAME_HEIGHT 768 //高度
#define GAME_TITLE "萨姆大战折纸小鸟 v1.0"  //标题
#define GAME_ICON":/flyImage/app.png"  //图标加载路径
#define GAME_RATE 10  //定时器刷新时间间隔  单位毫秒


/************ 地图配置数据 ***********/
#define MAP_PATH ":/flyImage/background.png"  //地图路径
#define MAP_SCROOL_SPEED 2  //地图滚动速度

/************ 飞机配置数据 ***********/
#define HERO_PATH ":/flyImage/SAM.png"

/************ 子弹配置数据 ***********/
#define BULLET_PATH ":/flyImage/zidan.png"  //子弹图片路径
#define BULLET_SPEED 5  //子弹移动速度
#define BULLET_NUM 30   //弹匣中的子弹总数
#define BULLET_INTERVAL 30 //发射子弹时间间隔

/************ 敌机配置数据 ***********/
#define ENEMY_PATH ":/flyImage/bird.png"  //敌机图片路径
#define ENEMY_SPEED 5  //敌机移动速度
#define ENEMY_NUM 20   //敌机总数
#define ENEMY_INTERVAL 30 //敌机出场时间间隔

/************ 爆炸配置数据 ***********/
#define BOMB_PATH ":/flyImage/bomb-%1.png"   //爆炸资源图片
#define BOMB_NUM 20  //爆炸数量
#define BOMB_MAX 7  //爆炸图片最大索引
#define BOMB_INTERVAL 10  //爆炸切图时间间隔

/************ 音乐配置数据 ***********/
#define SOUND_BACKGROUND ":/flyImage/bgm.wav"
#define SOUND_BOMB ":/flyImage/bomb.wav"



#endif // CONFIG_H
