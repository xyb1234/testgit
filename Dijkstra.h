#ifndef DIJKSTRA_H
#define DIJKSTRA_H
#include<iostream>
#include<string>
#include<iostream>
using namespace std;
struct Dis {
    string path;
    int value;
    bool visit;
    Dis() {
        visit = false;
        value = 0;
        path = "";
    }
};
class Graph_DG {
private:
    int vexnum;   //图的顶点个数
    int edge;     //图的边数
    int **arc;   //邻接矩阵
    Dis * dis;   //记录各个顶点最短路径的信息
public:
    //构造函数
    Graph_DG();
    Graph_DG(int vexnum, int edge);
    //析构函数
    ~Graph_DG();
    //创建图
    void createGraph();
    //打印邻接矩阵
    void print();
    //求最短路径
    void Dijkstra(int begin);
    //打印最短路径
    void print_path(int);
    void add_edge();
	void delete_edge();
	void insertdian(int h);
	void deletedian();
	void print_blank(int begin);
};
#endif
