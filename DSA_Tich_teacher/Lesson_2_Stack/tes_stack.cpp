#include<bits/stdc++.h>
#include "setting_stack_node.cpp"
using namespace std ;
int main(){
    STACK<int> S ;
    for(int x:{3,7,9,2,6}) S.push(x);
    while(S.size()){
        cout << S.top() << " ";
        S.pop();
    }
}
