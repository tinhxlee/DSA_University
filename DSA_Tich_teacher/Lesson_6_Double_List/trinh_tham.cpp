#include<iostream>
#include<algorithm>
using namespace std ;
int main(){
    int n, k ;
    cin >> n >> k ;
    int a[n + 5] ;
    for(int i = 1 ; i <= n ; i ++) cin >> a[i] ;
    for(int i = 1, j = k ; j <= n ; i ++, j ++) cout << *max_element(a + i, a + j + 1) << " ";
}