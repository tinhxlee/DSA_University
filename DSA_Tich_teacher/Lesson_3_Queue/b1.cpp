#include<bits/stdc++.h>
using namespace std ;
int main(){
	queue<int> Q ;
	for(int x:{1,2,3,4,5,6,7}){
		Q.push(x);
	}
	Q.push(8);
	while(!Q.empty()){
		cout << Q.front() << " ";
		Q.pop();
	}
}

