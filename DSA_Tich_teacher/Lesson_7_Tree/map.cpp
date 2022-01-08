// map
#include<iostream>
#include<map>
using namespace std ;
int main(){
    map<int,int> M ; // anh xa
    for(int x:{4,7,2,8,1,6,4,8,3,2}) M[x] ++ ; // in ra tan xuat
    for(auto m:M) cout << m.first << " " << m.second << "\n";
}