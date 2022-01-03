#include<iostream>
#include<list>
#include"dlist_tich.cpp"
using namespace std ;
int main(){
    dlist<int> L(5,3);
    cout << "\ndlist : ";
    for(auto x:L) cout << x << " ";
}