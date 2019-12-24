#include "Dijkstra.h"
#include <iostream>
#include <string>
using namespace std;
#include<sstream>
#include<fstream>
void Graph_DG::deletedian()
{
    cout << "你想要删除的点是：";
    int a = 0;
    cin >> a;
    for (int i = 0; i < this->vexnum; i++)
    {
        arc[i][a-1] = INT_MAX;
        arc[a-1][i] = INT_MAX;
    }
    cout << "图的邻接矩阵为：" << endl;
    int count_row = 0; //打印行的标签
    int count_col = 0; //打印列的标签
    //开始打印
    while (count_row != this->vexnum) {
        count_col = 0;
        while (count_col != this->vexnum) {
            if (arc[count_row][count_col] == INT_MAX)
                cout << "∞" << " ";
            else
                cout << arc[count_row][count_col] << " ";
            ++count_col;
        }
        cout << endl;
        ++count_row;
    }
}
void Graph_DG::insertdian(int h)
{
    int c, d, e, edge_num = 0;
    cout << "输入要增加的边数" << endl;
    cin >> edge_num;
    int temp[100][100] = { 0 };
    for (int i = 0; i < 100; i++)
    {
        for (int k = 0; k < 100; k++)
        {
            temp[i][k] = INT_MAX;
        }
    }
    cout << "请依次输入增加的边(请按照点点权值的顺序输入)：" << endl;
    for (int i = 0; i < edge_num; ++i)
    {
        cin >> c >> d >> e;
        temp[c - 1][d - 1] = e;
        temp[d - 1][c - 1] = e;
    }
    if (h <= vexnum)
    {
        for (int i = 0; i < this->vexnum ; ++i)
        {
            for (int j = 0; j < this->vexnum ; ++j)
            {
                if (temp[i][j] != 0)
                    arc[i][j] = temp[i][j];
            }
        }
        cout << "图的邻接矩阵为：" << endl;
        int count_row = 0; //打印行的标签
        int count_col = 0; //打印列的标签
        //开始打印
        while (count_row != this->vexnum) {
            count_col = 0;
            while (count_col != this->vexnum) {
                if (arc[count_row][count_col] == INT_MAX)
                    cout << "∞" << " ";
                else
                    cout << arc[count_row][count_col] << " ";
                ++count_col;
            }
            cout << endl;
            ++count_row;
        }
    }
    int A[100][100] = { 0 };
    for (int i = 0; i < this->vexnum; i++)
    {
        for (int k = 0; k < this->vexnum; k++)
        {
            A[i][k] = arc[i][k];
        }
    }
    if (h > vexnum)
    {
        this->vexnum = vexnum;
        this->edge = edge;
        this->vexnum = this->vexnum + 1;
        this->edge = edge + 1;
        //为邻接矩阵开辟空间和赋初值
        arc = new int* [h];
        dis = new Dis[h];
        for (int i = 0; i < h; i++) {
            arc[i] = new int[h];
            for (int k = 0; k <h; k++) {
                //邻接矩阵初始化为无穷大
                arc[i][k] = INT_MAX;
            }
        }
        for (int i = 0; i < h -1; i++)
        {
            for (int k = 0; k < h - 1; k++)
            {
                arc[i][k] = A[i][k];
            }
        }

        for (int i = 0; i < h ; ++i)
        {
            for (int j = 0; j < h ; ++j)
            {
                if (i >= this->vexnum-1 || j >= this->vexnum-1 && temp[i][j] == INT_MAX)
                {
                    arc[i][j] = temp[i][j];
                    arc[j][i] = temp[i][j];
                }
            }
        }
        cout << "图的邻接矩阵为：" << endl;
        int count_row = 0; //打印行的标签
        int count_col = 0; //打印列的标签
        //开始打印
        while (count_row != h) {
            count_col = 0;
            while (count_col != h) {
                if (arc[count_row][count_col] == INT_MAX)
                    cout << "∞" << " ";
                else
                    cout << arc[count_row][count_col] << " ";
                ++count_col;
            }
            cout << endl;
            ++count_row;
        }
    }
}
