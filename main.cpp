#include"Dijkstra.h"
#include<iostream>
using namespace std;
    
  int main() {
    
     Graph_DG graph(9, 12);
    graph.createGraph();
    graph.print();
    int a = 1;
    while (a != 0)
    {
        cout << "�˵�" << endl;
        cout << "1.������·����·�ɱ�����㣩" << endl;
        cout << "2.ɾ����" << endl;
        cout << "3.��ӱ�" << endl;
        cout << "4.ɾ������" << endl;
        cout << "5.��Ӷ���" << endl;
        cout << "���������ѡ��";
        int choice = 0;
        cin >> choice;
        int b = 0;
        switch (choice)
        {
        case 1:
            cout << "����Ҫ���ҵ�·�ɱ���ǣ�";
            cin >> b;
            graph.Dijkstra(b);
            graph.print_path(b);
            graph.print_blank(b);
            break;
        case 2:
            graph.delete_edge();
            graph.print();
            break;
        case 3:
            graph.add_edge();
            graph.print();
            break;
        case 4:
            graph.deletedian();
            break;
        case 5:
            graph.insertdian();
            break;
        }
        cout << "�Ƿ���Ҫ��������?��1�������������0�������������";
        cin >> a;
    }
    return 0;
}


