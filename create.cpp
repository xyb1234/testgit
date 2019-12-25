#include "Dijkstra.h"
#include <iostream>
#include <string>
using namespace std;
#include<sstream>
#include<fstream>

void Graph_DG::createGraph() {
	ifstream in;
	in.open("Dijkstra.txt");
	for(int i=0;i<edge;++i)
	{
	    int start;
	    int end;
	    int weight;
	    int count = 0;
	    while (count != this->edge) {
        in >> start >> end >> weight;
        //对邻接矩阵对应上的点赋值
        arc[start - 1][end - 1] = weight;
        arc[end - 1][start - 1] = weight;
        flag[count]=count+1;
        ++count;
    }
	}
   
}
