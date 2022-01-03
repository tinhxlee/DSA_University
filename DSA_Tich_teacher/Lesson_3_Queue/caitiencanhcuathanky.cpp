#include<bits/stdc++.h>
#include"queue_by_array.cpp"
using namespace std ;
int main(){
	string ten[] = {"dangdungcntt","tienquanutc", "quang123", "maianh", "nguyenminhduc2820"};
	Queue<pair<string,int>> Q ;
	for(string x:ten){
		Q.push({x,1});
	}
	int n ;
	cin >> n ;
	while(n> Q.front().second){
		Q.push(Q.front());
		Q.back().second *=2 ;
		n-= Q.front().second ;	
		Q.pop();	
	}
	cout << Q.front().first;
}
