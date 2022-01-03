#include <iostream>
#include <vector>
using namespace std;
struct Edge {
    int src, dest;
	double  weight;
};
typedef pair<int, double> Pair;
class Graph
{
public:
    vector<vector<Pair>> adjList;
    Graph(){
    	
	}
    Graph(vector<Edge> &edges, int n)
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
	friend void printGraph(Graph &g, int n)
	{
	    for (int i = 0; i < n; i++)
	    { 
	        for (Pair v: g.adjList[i]) {
	            cout << "(" << i << ", " << v.first << ", " << v.second << ") ";
	        }
	        cout << endl;
	    }
	}
	friend void addEdge(Graph &g,int s, int d, double w)
	{
	    g.adjList[s].push_back(make_pair(d, w));
        g.adjList[d].push_back(make_pair(s, w));
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
    vector<Edge> edges =
    {
        {0, 1, 6}, {1, 2, 7}, {2, 0, 5}, {2, 1, 4}, {3, 2, 10}, {5, 3,4} , {4, 5, 3}
    };
    int n = 6;
    Graph g(edges, n);
    addEdge(g,1,5,3);
    printGraph(g, n);
    int x, y ;
    cout << "Nhap canh can tim trong so : "; cin >> x >> y ;
    cout << " Trong so cua canh can tim : " <<g.getWeight(edges,x,y);
    return 0;
}
