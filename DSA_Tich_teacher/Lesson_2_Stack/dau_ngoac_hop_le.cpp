// Kiem tra dau ngoac hop le
#include<iostream>
#include"D:\university\Data structure-Algorithm_by Teacher_Tich\Lesson_7_Stack_2\setting_stack_node.cpp"
using namespace std;
int main(){
	// 4 + 5 + (2 + 3) * 4 [ 1 + 2 - (3 + 5 + 4) * {1 - 2}]
	//()[(){}]
	string x ;
	getline(cin,x) ;
	bool ok = 1 ;
	STACK<char> S ;
	for(;char c:x;){
		if(c == '(' or c =='[' or c == '{') S.push(c);
		else{
			if(c == ')') {if(S.size()&&S.top() == '(')  S.pop() ; else { ok = 0 ; break ;}}
			if(c == ']') {if(S.size()&&S.top() == '[')  S.pop() ; else { ok = 0 ; break ;}}
			if(c == '}') {if(S.size()&&S.top() == '{')  S.pop() ; else { ok = 0 ; break ;}}
		}
		
    }
    if(S.size()) ok = 0;
	cout << (ok?"Hop le":"Khong hop le");
}
