#include<iostream>
#include<list>
#include<vector>
using namespace std ;
int main(){
    int a[] = { 4, 7, 2, 8};
    vector<int> V(a, a + 4) ; // tao vector lay tu mang a
    list<int> L(V.begin(), V.end()); // tao danh sach lay tu vector V
    cout << "\nList : "; for(auto x : L) cout << x << " ";
}