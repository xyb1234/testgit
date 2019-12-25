#include "Dijkstra.h"
#include <iostream>
#include <string>
using namespace std;
#include<sstream>
#include<fstream>

void Graph_DG::add_edge()
{
	cout<<"输入要添加的边的两个顶点,以及权值"<<endl;
	int i;
	int j;
	int value;
	cin>>i>>j>>value;
	arc[convert(i)][convert(j)]=value;
	arc[convert(j)][convert(i)]=value;
}
void Graph_DG::delete_edge()
{
	cout<<"输入要删除的边的两个顶点"<<endl;
	int i;
	int j;
	cin>>i>>j;
	arc[convert(i)][convert(j)]=INT_MAX;
	arc[convert(j)][convert(i)]=INT_MAX;
}
