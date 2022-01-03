#include<iostream>
#include"setting_dlist.cpp"
using namespace std ;
int main(){
    dlist<int> L(5,3);
    cout << "\ndlist : "; for(auto x:L) cout << x << " ";
    L.front() = 2 ;
    L.back() = 8 ;
    cout << "\ndlist : "; for(auto x:L) cout << x << " ";
    L.pop_back(); L.push_back(69);
    L.pop_front(); L.push_front(92);
    cout << "\ndlist : "; for(auto x:L) cout << x << " ";
    // cout << "\ndlist : "; while(L.size()){cout << L.front() << " "; L.pop_front();}
    cout << "\ndlist reverse : "; for(dlist<int>::reverse_iterator rit = L.rbegin() ; rit != L.rend() ; rit ++) cout << *rit << " ";
    dlist<int>::iterator it = L.begin() ;
    it ++ ;
    L.insert(it,88);
    cout << "\ndlist : "; for(auto x:L) cout << x << " ";
    it = L.find(9);
    if(it == L.end()) cout << "\nKhong tim thay so ";
    else L.insert(it,85);
    cout << "\nlist : "; for(auto x:L) cout << x << " ";
    it = L.find(3);
    if(it == L.end()) cout << "\nKhong tim thay" ;
    else L.remove(it);
    cout << "\nlist : "; for(auto x:L) cout << x << " ";
    L.sort();
    cout << "\nlist : "; for(auto x:L) cout << x << " ";




}