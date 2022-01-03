#include<iostream>
#include<list>
#include"setting_dlist.cpp"
using namespace std ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    dlist<int> L ; // ta co the thay the bang dequeue
    int n, k, x[n + 5] ;
    cin >> n >> k ;
    for(int i = 1; i <= n; i ++){
        cin >> x[i] ;
        while(L.size() && x[L.back()] <= x[i]) L.pop_back();
        L.push_back(i);
        while(i - L.front() >= k) L.pop_front();
        if(i >= k) cout << x[L.front()] << " ";
    }
}