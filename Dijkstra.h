#ifndef DIJKSTRA_H
#define DIJKSTRA_H
#include<iostream>
#include<string>
#include<iostream>
using namespace std;
struct Dis {
    string path;
    int value;
    bool visit;
    Dis() {
        visit = false;
        value = 0;
        path = "";
    }
};
class Graph_DG {
private:
    int vexnum;   //ͼ�Ķ������
    int edge;     //ͼ�ı���
    int **arc;   //�ڽӾ���
    Dis * dis;   //��¼�����������·������Ϣ
public:
    //���캯��
    Graph_DG();
    Graph_DG(int vexnum, int edge);
    //��������
    ~Graph_DG();
    //����ͼ
    void createGraph();
    //��ӡ�ڽӾ���
    void print();
    //�����·��
    void Dijkstra(int begin);
    //��ӡ���·��
    void print_path(int);
    void add_edge();
	void delete_edge();
	void insertdian(int h);
	void deletedian();
	void print_blank(int begin);
};
#endif
