#include<iostream>
#include<random>
#include<time.h>
using namespace std ;
int main(){
	int a[] = {1,2,3,4,5,6,7,8,9} , n = sizeof(a)/sizeof(int);
	srand(time(0));
	for(int i = 0 ;i < n ; i ++){
		int j = rand() %n ; // RAND_MAX
		swap(a[i],a[j]);
	}
	for(auto x:a) cout << x << " ";
}
