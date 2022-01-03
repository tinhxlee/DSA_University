#include<bits/stdc++.h>
using namespace std ;
class Graph{
	private:	
		int n ,m ; // n la so dinh, m la so canh
		vector<int> adj[1000];
	public:
		void input(){
			cout << "Nhap so dinh : ";
			cin >> n  ;
			cout << "Nhap so canh : ";
			cin >> m ;
			int x, y ;
			for(int i = 0 ; i < m ; i ++){
				cin >> x >> y ;
				adj[x].push_back(y);
				adj[y].push_back(x);
			}	
		}
		void output(){
			for(int i = 0 ; i < n ; i ++){
				cout << i << " : ";
				for(int x:adj[i]){
					cout << x << " ";
				}
				cout << endl ;
			}
		}
};
int main(){
	Graph g ;
	g.input();
	g.output();
}
