#include "Dijkstra.h"
#include <iostream>
#include <string>
using namespace std;
#include<sstream>
#include<fstream>
template<typename _T>
string to_string(const _T& t) {
	ostringstream os;
	os << t;
	return os.str();
}
int to_int(char t){
	return t-48;
}
int Graph_DG::convert1(int begin)
{
	return flag[begin-1];
}
void Graph_DG::print_path(int begin) {
    string str;
    for(int i=0;i<vexnum;++i)
    {
    	if(flag[i]==begin)
    	begin=i+1;
	}
    str = "v" + to_string(begin);
    cout << "��"<<str<<"Ϊ����ͼ�����·��Ϊ��" << endl;
    for (int i = 0; i != this->vexnum; i++) {
        if(dis[i].value!=INT_MAX)
        cout << dis[i].path << "=" << dis[i].value << endl;
        /*else {
            cout << dis[i].path << "�������·����" << endl;
        }*/
    }
}
void Graph_DG::print_blank(int begin){
    int test=0;
    for(int i=0;i<this->vexnum;++i)
    {
    	if(flag[i]==begin)
    	test=1;
	}
	if(test==0)
	{
		cout<<"������"<<begin<<"·����"<<endl; 
	}
	string str;
    str = "v" + to_string(begin);
    cout<<"Ŀ��"<<"\t"<<"��һ��"<<"\t"<<"Ȩֵ"<<endl; 
    for (int i = 0; i != this->vexnum; i++) {
        if(dis[i].value!=INT_MAX)
        {
        	if(dis[i].path[dis[i].path.length()-2]>='0'&&dis[i].path[dis[i].path.length()-2]<='9')
        	{
        		if(begin>9)
        		{
        			if(dis[i].path[8]>='0'&&dis[i].path[8]<='9')
        			{
        				int a=to_int(dis[i].path[dis[i].path.length()-2])*10+to_int(dis[i].path[dis[i].path.length()-1]);
        				int b=to_int(dis[i].path[7])*10+to_int(dis[i].path[8]);
        				cout<<convert1(a)<<"\t"<<convert1(b)<<"\t" << dis[i].value << endl;
					}
        			
        			else
        			{
        				int a=to_int(dis[i].path[dis[i].path.length()-2])*10+to_int(dis[i].path[dis[i].path.length()-1]);
        				int b=to_int(dis[i].path[7]);
        				cout<<convert1(a)<<"\t"<<convert1(b)<<"\t" << dis[i].value << endl;
					}
				}
        		else
        		{
        			if(dis[i].path[7]>='0'&&dis[i].path[7]<='9')
        			{
        				int a=to_int(dis[i].path[dis[i].path.length()-2])*10+to_int(dis[i].path[dis[i].path.length()-1]);
        				int b=to_int(dis[i].path[6])*10+to_int(dis[i].path[7]);
        				cout<<convert1(a)<<"\t"<<convert1(b)<<"\t" << dis[i].value << endl;
					}
        			else
        			{
        				int a=to_int(dis[i].path[dis[i].path.length()-2])*10+to_int(dis[i].path[dis[i].path.length()-1]);
        				int b=to_int(dis[i].path[6]);
        				cout<<convert1(a)<<"\t"<<convert1(b)<<"\t" << dis[i].value << endl;
					}
				}
			 } 
        	else
        	{
        		if(begin>9)
        		{
        			int a=to_int(dis[i].path[dis[i].path.length()-1]);
        			int b=to_int(dis[i].path[7]);
        			cout<<convert1(a)<<"\t"<<convert1(b)<<"\t" << dis[i].value << endl;
				}
        		else
        		{
        			int a=to_int(dis[i].path[dis[i].path.length()-1]);
        			int b=to_int(dis[i].path[6]);
        			cout<<convert1(a)<<"\t"<<convert1(b)<<"\t" << dis[i].value << endl;
				}
			}
        	
		}
        /*else {
            if(dis[i].path[dis[i].path.length()-2]>='0'&&dis[i].path[dis[i].path.length()-2]<='9')
        	{
        		cout<<dis[i].path[dis[i].path.length()-2]<<dis[i].path[dis[i].path.length()-1]<<"\t"<<"��"  << "\t" << "��" << endl;
			 } 
        	else
        	{
        		
        		cout <<dis[i].path[dis[i].path.length()-1]<<"\t"<< "��" << "\t" << "��" << endl;
			}
        }*/
    }
}
