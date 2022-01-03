// Thuat toan DFS : DEPTH FIRST SHEARCH
#include<iostream>
#include"STACK.cpp"
using namespace std ;
int main()
{
	int n ;
	cout << "Nhap n = ";
	cin >> n ;
	int d[n + 5] = {} ; // Mang danh dau nhung thang di duoc tu n , ban dau cho nó bang 0
	Stack<int> S ;
	S.push(n);
	d[n] = 1 ; // danh dau n la di duoc nen cho nó bang 1
	while(S.size())
	{
		int u = S.top() ;
		S.pop();
		for(int a = 1 ; a*a <= u ; a ++)
		if(u%a == 0)
		{
			int b = u/a ;
			int v = (a - 1) * (b + 1);
			if(d[v] == 0)
			{
				S.push(v);
				d[v] = 1 ;			
			}				
		}	
	}
	for(int i = 0 ; i <= n ; i ++) if(d[i]) cout << i << " ";
}
