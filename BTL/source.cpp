#include<bits/stdc++.h>
#define MAX 1000

using namespace std;

class Vertex
{
private:
  int vertex;
  int distance;

public:
  Vertex *next;

  Vertex(int vertext)
  {
    this->vertex = vertext;
    this->distance = 0;
  }

  Vertex(int vertex, int distance)
  {
    this->vertex = vertex;
    this->distance = distance;
  }

  int getVertex()
  {
    return vertex;
  }

  int getDistance()
  {
    return distance;
  }
};

class Graph
{
private:
  int n;
  Vertex **vertexes;

  int MinDistance(int dist[], bool sptSet[])
  {
    int min = MAX, min_index;

    for (int i = 0; i < n; i++)
    {
      if (sptSet[i] == false && dist[i] <= min)
      {
        min = dist[i];
        min_index = i;
      }
    }

    return min_index;
  }

public:
  Graph(int n)
  {
    this->n = n;
    this->vertexes = new Vertex *[n];
  }

  void InsertEdge(int s, int d, float weight)
  {
    InsertVertex(s);
    InsertVertex(d);

    Vertex *edge;
    Vertex *point;

    // Thêm d?nh d vào danh sách d?nh k? c?a s
    edge = new Vertex(d, weight);
    point = vertexes[s];

    edge->next = point->next;
    point->next = edge;

    // Thêm d?nh s vào danh sách d?nh k? c?a d
    edge = new Vertex(s, weight);
    point = vertexes[d];

    edge->next = point->next;
    point->next = edge;
  }

  bool InsertVertex(int s)
  {
    if (vertexes[s] == NULL)
    {
      vertexes[s] = new Vertex(s);
      return true;
    }

    return false;
  }

  int GetWeight(int s, int d)
  {
    Vertex *point = vertexes[s];

    while (point != NULL)
    {
      if (point->getVertex() == d)
      {
        return point->getDistance();
      }
      point = point->next;
    }

    return MAX;
  }

  void Print()
  {
    for (int i = 0; i < n; i++)
    {
      Vertex *point = vertexes[i];
      int vertex = point->getVertex();

      while (point->next != NULL)
      {
        point = point->next;
        cout << "From "
             << vertex
             << " to "
             << point->getVertex()
             << ": "
             << point->getDistance()
             << endl;
      }
    }
  }

  
};

void b14P3(const char *file)
{
  fstream infile(file);
  int s, d, n;
  float w;

  infile >> n;
  Graph graph(n);

  while (infile >> s >> d >> w)
  {
    graph.InsertEdge(s, d, w);
  }

  graph.Print();

  cout<<"\n----------------------\n";
  cout<<"Enter the source: " << n;
  cin >> s;
  printf("Enter the source(0-%d): ", n);
  cin >> d;

//  graph.Dijkstra(s, d);
}

int main()
{
  b14P3("graph.txt");
  return 0;
}
