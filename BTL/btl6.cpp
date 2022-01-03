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
void inputFile(const char *file)
{
  fstream infile(&file);
  int src, dest, n;
  float weight;

  infile >> n;
  Graph g(edges,n);

  while (infile >> src >> dest >> weight)
  {
    g.addEdge(s, d, w);
  }

  printGraph(g, n);
}

int main()
{
    inputFile("graph.txt");
    cout << g.getWeight(edges,0,1);
    return 0;
}
