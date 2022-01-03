#include<iostream>
#include<stack>
using namespace std ;
int main()
{
	stack<int> S ; // Khai bao mot ngan xep rong chua cac so nguyen(luon rong)
	for(int x:{1,2,3,4,5,6}) S.push(x);
	S.top() = 9 ; // gan gia tri 6 = 9 
	while(not S.empty()){
		cout << S.top() << " ";
		S.pop(); // Lay ra ma khong quan tam den gia tri gi
	}

}
