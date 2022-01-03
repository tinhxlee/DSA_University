#include<bits/stdc++.h>
#include"queue_by_array.cpp"
using namespace std ;
int main(){
	Queue<int> Q ;
	for(int x:{1,2,3,4,5,6,7}){
		Q.push(x);
	}
	Q.push(8);
	Q.front() = 96 ;
	Q.back() = 69 ;
	while(!Q.empty()){
		cout << Q.front() << " ";
		Q.pop();
	}
}

