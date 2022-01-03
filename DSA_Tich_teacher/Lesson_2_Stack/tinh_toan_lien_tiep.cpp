#include<iostream>
#include<stack>
using namespace std ;
int main()
{
	stack<int> S ; // Chi luu vi tri thoi
	int n ;
	cin >> n ;
	int a[n + 5] = {INT_MAX}; // INT_MAX nghia la vo cung
	for(int i = 1 ; i <= n ; i ++) cin >> a[i];
	S.push(0); // day 0 vào stack , lúcc này a[0] = vô cùng
	for(int i = 1 ; i <= n ; i ++)
	{
		// Mac du 2 vòng lap long nhau nhung do phuc tap chi la O(n) 
		while(a[S.top()] <= a[i]) S.pop(); // lấy ra tất ca các phần tu nhỏ hon a[i]
		cout << i - S.top() << " " ;
		S.push(i);
	}

}
