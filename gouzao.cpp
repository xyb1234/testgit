#include "Dijkstra.h"
#include <iostream>
#include <string>
using namespace std;
#include<sstream>
#include<fstream>

//���캯��
Graph_DG::Graph_DG(int vexnum, int edge) {
    //��ʼ���������ͱ���
    this->vexnum = vexnum;
    this->edge = edge;
    //Ϊ�ڽӾ��󿪱ٿռ�͸���ֵ
    arc = new int*[this->vexnum];
    dis = new Dis[this->vexnum];
    flag=new int[this->vexnum];
    for (int i = 0; i < this->vexnum; i++) {
        arc[i] = new int[this->vexnum];
        for (int k = 0; k < this->vexnum; k++) {
            //�ڽӾ����ʼ��Ϊ�����
                arc[i][k] = INT_MAX;
        }
    }
}
