#include "Dijkstra.h"
#include <iostream>
#include <string>
using namespace std;
#include<sstream>
#include<fstream>

void Graph_DG::add_edge()
{
	cout<<"����Ҫ��ӵıߵ���������,�Լ�Ȩֵ"<<endl;
	int i;
	int j;
	int value;
	cin>>i>>j>>value;
	arc[i-1][j-1]=value;
	arc[j-1][i-1]=value;
}
void Graph_DG::delete_edge()
{
	cout<<"����Ҫɾ���ıߵ���������"<<endl;
	int i;
	int j;
	cin>>i>>j;
	arc[i-1][j-1]=INT_MAX;
	arc[j-1][i-1]=INT_MAX;
}
