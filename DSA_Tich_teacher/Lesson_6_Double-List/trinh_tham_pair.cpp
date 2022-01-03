#include<iostream>
#include<list>
using namespace std ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    list< pair<int, int> > L ;
    int n, k, x ;
    cin >> n >> k ;
    for(int i = 1; i <= n; i ++){
        cin >> x ;
        while(L.size() && L.back().second <= x) L.pop_back();
        L.push_back({i,x});
        while(i - L.front().first >= k) L.pop_front();
        if(i >= k) cout << L.front().second << " ";
    }
}