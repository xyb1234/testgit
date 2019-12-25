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
    for(int i=0;i<vexnum;++i)
    {
    	if(flag[i]==a)
    	a=i+1;
	}
    int **temp=new int*[this->vexnum-1];
    for(int i=0;i<vexnum-1;++i)
    {
    	temp[i]=new int [this->vexnum-1];
	}
    int temp1[this->vexnum];
    for(int i=0;i<vexnum;++i)
    {
    	temp1[i]=flag[i];
	}
	flag=NULL;
    flag=new int[this->vexnum-1];
    for(int i=0;i<a-1;++i)
    {
    	flag[i]=temp1[i];
	}
	for(int i=a;i<this->vexnum;++i)
	{
		flag[i-1]=temp1[i];
	}
	
	cout<<a<<"d"<<endl;
    for(int i=0;i<a-1;++i)
    {
    	for(int j=0;j<a-1;++j)
    	{
    		temp[i][j]=arc[i][j];
		}
	}
	cout<<"e"<<endl;
	for(int i=0;i<a-1;++i)
	{
		for(int j=a;j<this->vexnum;++j)
		{
			temp[i][j-1]=arc[i][j];
		}
	}
	for(int i=a;i<this->vexnum;++i)
	{
		for(int j=0;j<a-1;++j)
		{
			temp[i-1][j]=arc[i][j];
		}
	}
	for(int i=a;i<this->vexnum;++i)
	{
		for(int j=a;j<this->vexnum;++j)
		{
			temp[i-1][j-1]=arc[i][j];
		}
	}
	cout<<"c"<<endl;
	delete arc;
	arc = new int*[this->vexnum-1];
	for(int i=0;i<vexnum-1;++i)
    {
    	arc[i]=new int [this->vexnum-1];
	}
	this->vexnum-=1;
    for(int i=0;i<this->vexnum;++i)
	{
		for(int j=0;j<this->vexnum;++j)
		{
			arc[i][j]=temp[i][j];
		}
	}
	cout<<"a"<<endl;
    print();
}
void Graph_DG::insertdian(int h)
{
	int temp1[this->vexnum];
    for(int i=0;i<vexnum;++i)
    {
    	temp1[i]=flag[i];
	}
	flag=NULL;
    flag=new int[this->vexnum+1];
    for(int i=0;i<this->vexnum;++i)
    {
    	flag[i]=temp1[i];
	}
	flag[this->vexnum]=h; 
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
        temp[this->vexnum][d - 1] = e;
        temp[d - 1][this->vexnum] = e;
    }
    int A[100][100] = { 0 };
    for (int i = 0; i < this->vexnum; i++)
    {
        for (int k = 0; k < this->vexnum; k++)
        {
            A[i][k] = arc[i][k];
        }
    }
    this->vexnum = this->vexnum + 1;
    this->edge = edge + 1;
    //为邻接矩阵开辟空间和赋初值
    arc = new int* [this->vexnum];
    dis = new Dis[this->vexnum];
    for (int i = 0; i < this->vexnum; i++) {
        arc[i] = new int[this->vexnum];
        for (int k = 0; k < this->vexnum; k++) {
            //邻接矩阵初始化为无穷大
            arc[i][k] = INT_MAX;
        }
    }
    for (int i = 0; i < this->vexnum - 1; i++)
    {
        for (int k = 0; k < this->vexnum - 1; k++)
        {
            arc[i][k] = A[i][k];
        }
    }
    for (int i = 0; i < this->vexnum; i++)
    {
        for (int j = 0; j < this->vexnum; j++)
        {
            if (temp[i][j] != INT_MAX)
            {
                arc[i][j] = temp[i][j];
                arc[j][i] = temp[j][i];
            }
        }
    }
    print();
}

