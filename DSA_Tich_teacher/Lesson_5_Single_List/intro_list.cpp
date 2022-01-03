#include<iostream>
#include<list>
using namespace std ;
int main(){
    list <int> L(6,2); // khai bao list co 6 so 2
    cout << "\nlist : "; for(int l:L) cout << l << " "; // cach duyet 1
    //cout << "\nlist : "; for(list<int>::iterator it = L.begin(); it != L.end(); it ++) cout << *it << " "; // cach duyet 2
    //cout << "\nlist : "; for(auto it = L.begin(); it != L.end(); it ++) cout << *it << " "; // cach duyet 3
    L.push_front(5) ; // them vao dau so 5
    L.back() = 7 ; // sua phan tu cuoi bang 7
    cout << "\nlist : "; for(int l:L) cout << l << " "; // cach duyet 1
    auto it = L.begin();
    it ++; it ++ ;
    *it = 99 ;
    cout << "\nlist : "; for(int l:L) cout << l << " "; // cach duyet 1
    cout << "\nlist dao : "; for(list<int>::reverse_iterator it = L.rbegin(); it != L.rend() ; it ++) cout << *it << " ";
    int a[] = {66,67,68,69} ;
    it ++ ;
    L.insert(it, a, a + 4);
    cout << "\nlist : "; for(int l:L) cout << l << " "; // cach duyet 1
    L.erase(it);
    cout << "\nlist : "; for(int l:L) cout << l << " "; // cach duyet 1
    cout << "\nSize of L : " << L.size();
    L.sort();
    cout << "\nlist sort : " ; for(auto x:L) cout << x << " ";




}