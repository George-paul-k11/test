#include "mainwindow.h"
#include "log_widget.h"
#include<bits/stdc++.h>

#include <QApplication>

using namespace std;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    log_widget l;
    l.show();
    return a.exec();
}

// 定义坐标结构体
/*struct Coordinate {
    double x;
    double y;
}loc;*/

// 定义内部结构结构体
struct InnerStructure {
    // 这里可以添加你需要的成员变量
};

// 定义景点结构体
struct ScenicSpot {
    int popularity; // 热度
    string evaluation; // 评价
    string keywords; // 兴趣关键词
    string introduction; // 介绍
//    Coordinate coordinate; // 坐标
    InnerStructure inner_structure; // 内部结构
    string category; // 所属类别
    string name; // 景点名称
};

// 定义游学日记结构体
struct TravelDiary {
    int popularity; // 热度
    string evaluation; // 评价
    string keywords; // 兴趣关键词
    string diary_file; // 日记文本文件
    string name; // 游学日记名称
    int num;//浏览次数
}dairy[100];

// 定义建筑物结构体
struct Building {
//    Coordinate coordinate; // 坐标
    // 可以添加其他成员变量，如名称、类型等
};

// 定义服务方式结构体
struct Service {
//    Coordinate coordinate; // 坐标
    // 可以添加其他成员变量，如名称、类型等
};

// 定义景点内部结构结构体，为了最短路径方面，这里建筑物类型沿用景点类型，但景点类型里一些项要设为空
struct ScenicSpotInnerStructure {
    vector<ScenicSpot> buildings; // 建筑物列表
    vector<ScenicSpot> services; // 服务方式列表
};

//定义路径
struct path {
    int length;//长度
    int crowd;//拥挤度
};

struct ScenicSpot now_loc;
struct ScenicSpot destination_loc;
struct ScenicSpot spot[200];

//账号注册函数
void sign_in() {

}

//确定账号登录成功函数
void log_in() {

}

//推荐界面的排序算法，按热度以及距离排序吧
void commend_sort() {

}

//查找界面的算法，要求根据输入的关键字或者热度或者名称，按照距离排序
void find_sort() {

}

//最短路径规划算法，考虑拥挤度，以后还要加上对交通方式的考虑
void shortest_path(struct ScenicSpot now/*当前位置*/, struct ScenicSpot des) {

}

//场所查询函数，输入一个内部景点，显示附近的服务设施，按距离排序
void search_sort(struct ScenicSpotInnerStructure now) {

}

//游学日记的增加操作（可能要用压缩）
void file_add() {

}

//游学日记的删除操作
void file_delete() {

}

//游学日记的查找操作（要能记录浏览次数，和支持对内容的文本搜索）
void file_find() {

}
