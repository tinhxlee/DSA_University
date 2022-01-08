//set : Con goi la tap hop
#include<iostream>
#include<set>
using namespace std ;
int main(){
    set<int> S ; // in ra tu be den lon nhung chi in 1 lan
    for(int x:{4,7,2,8,1,6,4,8,3,2}) S.insert(x) ;
    cout << "\nset : " ;for(auto s:S) cout << s << " ";
    S.erase(2);
    cout << "\nset : "; for(auto s:S) cout << s << " ";
}