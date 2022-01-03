#include<bits/stdc++.h>
using namespace std ;
int main(){
	string ten[] = {"dangdungcntt","tienquanutc", "quang123", "maianh", "nguyenminhduc2820"};
	queue<string> Q ;
	for(string x:ten){
		Q.push(x);
	}
	int n ;
	cin >> n ;
	while(n>1){
		Q.push(Q.front());
		Q.push(Q.front());
		Q.pop();
		n -- ;		
	}
	cout << Q.front();
}
