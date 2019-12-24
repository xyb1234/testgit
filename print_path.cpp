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
    cout << "以"<<str<<"为起点的图的最短路径为：" << endl;
    for (int i = 0; i != this->vexnum; i++) {
        if(dis[i].value!=INT_MAX)
        cout << dis[i].path << "=" << dis[i].value << endl;
        else {
            cout << dis[i].path << "是无最短路径的" << endl;
        }
    }
}
void Graph_DG::print_blank(int begin){
    string str;
    str = "v" + to_string(begin);
    cout<<"目的"<<"\t"<<"下一跳"<<"\t"<<"权值"<<endl; 
    for (int i = 0; i != this->vexnum; i++) {
        if(dis[i].value!=INT_MAX)
        {
        	if(dis[i].path[dis[i].path.length()-2]>='0'&&dis[i].path[dis[i].path.length()-2]<='9')
        	cout<<dis[i].path[dis[i].path.length()-2]<<dis[i].path[dis[i].path.length()-1]<<"\t"<< dis[i].path[6] << "\t" << dis[i].value << endl;
        	else
        	cout <<dis[i].path[dis[i].path.length()-1]<<"\t"<< dis[i].path[6] << "\t" << dis[i].value << endl;
		}
        else {
            if(dis[i].path[dis[i].path.length()-2]>='0'&&dis[i].path[dis[i].path.length()-2]<='9')
        	cout<<dis[i].path[dis[i].path.length()-2]<<dis[i].path[dis[i].path.length()-1]<<"\t"<< "无" << "\t" << "∞"<< endl;
        	else
        	cout <<dis[i].path[dis[i].path.length()-1]<<"\t"<< "无" << "\t" << "∞"<< endl;
        }
    }
}
