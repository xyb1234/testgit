#include"Dijkstra.h"
#include<iostream>
using namespace std;
    
  int main() {
    
     Graph_DG graph(9, 12);
    graph.createGraph();
    graph.print();
    int a = 1;
    while (a != 0)
    {
        cout << "菜单" << endl;
        cout << "1.输出最短路径和路由表（输入点）" << endl;
        cout << "2.删除边" << endl;
        cout << "3.添加边" << endl;
        cout << "4.删除顶点" << endl;
        cout << "5.添加顶点" << endl;
        cout << "请输入你的选择：";
        int choice = 0;
        cin >> choice;
        int b = 0;
        switch (choice)
        {
        case 1:
            cout << "你想要查找的路由表号是：";
            cin >> b;
            graph.Dijkstra(b);
            graph.print_path(b);
            graph.print_blank(b);
            break;
        case 2:
            graph.delete_edge();
            graph.print();
            break;
        case 3:
            graph.add_edge();
            graph.print();
            break;
        case 4:
            graph.deletedian();
            break;
        case 5:
            graph.insertdian();
            break;
        }
        cout << "是否想要继续操作?（1代表继续操作，0代表结束操作）";
        cin >> a;
    }
    return 0;
}


