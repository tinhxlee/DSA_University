#include<bits/stdc++.h>
using namespace std ;
class Graph{
	private:
		vector<pair<int,double>> adj ;
		int u , v, n ;
		double wt ;
	public:
		friend void input(Graph G){
			cin >> G.n ;
			G.adj.resize(G.n);
			while(){
				G.adj[G.u].push_back(make_pair(G.v,G.wt)) ;
				G.adj[G.v].push_back(make_pair(G.u,G.wt)) ;
			}
		}
		friend void output(Graph G){
			for(int G.u = 0 ; G.u < n ; G.u ++){
				cout << "Dinh thu " << G.u << " : \n";
				for(auto it = G.adj[G.u].begin(); it != G.adj[G.u].end(); it ++){
					G.v = it->first ;
					G.wt = it->second ;
					cout << "\tDinh " << G.v << " voi trong so : " << G.wt  << "\n";
				}
				cout << endl ;
			}
		}
		
};
int main(){
	Graph g ;
	input(g);
	output(g);
}
