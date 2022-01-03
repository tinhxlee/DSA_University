#include<iostream>
#include"slist_setting.cpp"
using namespace std ;
int main(){
    slist<int> L(5,3);
    cout << "\nslist: ";
    for(auto x:L) cout << x << " ";
}