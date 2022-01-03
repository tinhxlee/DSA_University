#include<bits/stdc++.h>
using namespace std ;
typedef pair<int,int> TT ;
int main(){
	int n, m, k ;
	cin >> n >> m >> k ;
	if(k % __gcd(n,m)){
		cout << "Khong dong duoc nuoc" ;
		return 0 ;
	}
	queue<TT> Q ;
	map<TT,TT> M ;
	Q.push({0,0});
	while(Q.size()){
		TT u = Q.front();
		Q.pop();
		int x = u.first, y = u.second , z = x + y ;
		TT next[] = {{0,y},{n,y}, {x,0},{x,m},{max(0,z-m),min(z,m)},{min(z,n),max(0,z-n)}};
		for(TT v:next){
			if(M.find(v) == M.end()){
				M[v] = u;
				Q.push(v);
				if(v.first == k || v.second == k){
					stack<TT> S ;
					while(v.first + v.second > 0){
						S.push(v);
						v = M[v];
					}
					cout << "(0,0)";
					while(S.size()){
						cout << "->(" << S.top().first << "," << S.top().second << ")"; 
						S.pop();
					}
					return  0;
				}
			}
		}
	}
	return  0;
}
