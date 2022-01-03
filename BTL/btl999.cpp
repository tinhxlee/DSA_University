#include <bits/stdc++.h>
using namespace std;
class Edge {
    public:
    int src, dest;
	double  weight;
    Edge(){
        src = dest = 0 ;
        weight = 0;
    }
    friend istream &operator>>(istream &is, Edge &e){
        is >> e.src >> e.dest >> e.weight;
        return is ;
    }
    
};
typedef pair<int, double> Pair;
class Graph
{
public:
    vector<vector<Pair>> adjList;
    Graph(){
    	
	}
    Graph(vector<Edge> &edges, int &n)
    {
        adjList.resize(n);
        for (auto &edge: edges)
        {
            int src = edge.src;
            int dest = edge.dest;
            int weight = edge.weight;
            adjList[src].push_back(make_pair(dest, weight));
            adjList[dest].push_back(make_pair(src, weight));
        }
    }
	friend void printGraph(Graph &g, int &n)
	{
	    for (int i = 0; i < n; i++)
	    { 
	        for (Pair v: g.adjList[i]) {
	            cout << "(" << i << ", " << v.first << ", " << v.second << ") ";
	        }
	        cout << endl;
	    }
	}
	friend void addEdge(Graph &g,Edge &e,int &n)
	{
        g.adjList.resize(n + 1);
	    g.adjList[e.src].push_back(make_pair(e.dest, e.weight));
        g.adjList[e.dest].push_back(make_pair(e.src, e.weight));     
	}
	double getWeight(vector<Edge> &edges,int s, int d){
		double value ;
		for(auto &edge:edges){
			if(edge.src == s && edge.dest == d){
				value = edge.weight ;
			}
		}
		return value ;
	}
};
int main()
{
    int n ;
    cout << "Nhap so canh : ";
    cin >> n ;
    vector<Edge> edges(n);
    // {
    //     {0, 1, 6}, {1, 2, 7}, {2, 0, 5}, {2, 1, 4}, {3, 2, 10}, {5, 3,4} , {4, 5, 3}
    // };
    cout << "\nNhap cac canh : \n";
    fstream file("graph.txt");
    for(auto &e:edges) file >> e ;
    Graph g(edges, n);
    printGraph(g, n);
    Edge e ;
    cout << "Nhap canh muon them vao : ";
    cin >> e ;
    addEdge(g,e,n);
    printGraph(g, n);
    int x, y ;
    cout << "Nhap canh can tim trong so : "; cin >> x >> y ;
    cout << " Trong so cua canh can tim : " <<g.getWeight(edges,x,y);
    return 0;
}
