// doi so thap phan sang so nhi phan
#include<iostream>
#include"D:\university\Data structure-Algorithm_by Teacher_Tich\Lesson_7_Stack_2\setting_stack_node.cpp"
using namespace std ;
int main(){
	int n;
	cout << "Nhap n = ";
	cin >> n ;
	STACK<int> S ;
	while(n){S.push(n%2); n/=2 ;}
	while(S.size()) { cout << S.top() ; S.pop() ; }
	
}
