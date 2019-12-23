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
void Graph_DG::print_path(int begin) {
    string str;
    str = "v" + to_string(begin);
    cout << "��"<<str<<"Ϊ����ͼ�����·��Ϊ��" << endl;
    for (int i = 0; i != this->vexnum; i++) {
        if(dis[i].value!=INT_MAX)
        cout << dis[i].path << "=" << dis[i].value << endl;
        else {
            cout << dis[i].path << "�������·����" << endl;
        }
    }
}
