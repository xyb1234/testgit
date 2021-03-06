#include "Dijkstra.h"
#include <iostream>
#include <string>
using namespace std;
#include<sstream>
#include<fstream>

void Graph_DG::print() {
    cout << "图的邻接矩阵为：" << endl;
    int count_row = 0; //打印行的标签
    int count_col = 0; //打印列的标签
    //开始打印
    cout<<"号";
    for(int i=0;i<this->vexnum;++i )
    {
    	cout<<flag[i]<<" ";
	}
	cout<<endl;
    while (count_row != this->vexnum) {
        count_col = 0;
        while (count_col != this->vexnum) {//cout<<flag[count_row]<<" "; 
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
