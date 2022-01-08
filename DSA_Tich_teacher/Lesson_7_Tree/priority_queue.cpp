#include<iostream>
#include<queue>
using namespace std ;
int main(){
    priority_queue<int> P ; // hang doi uu tien , day la 1 cai cay, uu tin tu lon den be
    for(int x:{4,7,2,8,1,6}) P.push(x);
    while(P.size()){
        cout << P.top() << " "; // Se in ra gia tri giam dan
        P.pop();
    }
    priority_queue<int, vector<int>, greater<int> > Q ; // uu tien tu be den lon, thay grater = less thi uu tien tu lon den be
    for(int x:{4,7,2,8,1,6}) Q.push(x);
    cout << endl ;
    while(Q.size()){
        cout << Q.top() << " ";
        Q.pop();
    }
}