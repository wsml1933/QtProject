#include "map.h"
#include "config.h"


Map::Map()
{
    //初始化地图加载；
    m_map1.load(MAP_PATH);
    m_map2.load(MAP_PATH);

    //初始化Y轴坐标
    m_map1_pos_Y = -GAME_HEIGHT;
    m_map2_pos_Y = 0;

    //地图滚动速度
    m_scroll_speed = MAP_SCROOL_SPEED;
}

void Map::mapPosition()
{
    //处理第一张图片滚动位置
    m_map1_pos_Y += m_scroll_speed;
    if(m_map1_pos_Y >= 0)
    {
        m_map1_pos_Y = -GAME_HEIGHT;
    }
    //处理第二张图片滚动位置
    m_map2_pos_Y += m_scroll_speed;
    if(m_map2_pos_Y >= GAME_HEIGHT)
    {
        m_map2_pos_Y = 0;
    }
}
