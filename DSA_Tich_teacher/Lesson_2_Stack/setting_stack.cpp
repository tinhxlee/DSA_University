#include<iostream>
using namespace std ;
template <class T> // Stack chua cac phan tu kieu T chua xac dinh
class Stack{
	private:
		int n, cap ; // so phan tu n dang dung trong thung co suc chua cap
		T *buff ;
	public:
		Stack()
		{
		    n = 0 ; 
		    cap = 0 ; 
		    buff = NULL ;
		} // Ham tao gia tri mac dinh , ban dau chua co gi nen ta khoi tao nhu z
		
		~Stack()
		{ 
		    if(buff) delete[] buff ; 
		} // Ham huy , neu buff khac 0 thì delete buff
		
		int size()
		{
		    return n ; 
		} // tra ve so luong phan tu trong Stack
		
		bool empty() 
		{ 
		    return n == 0 ;
		} // Tra ve phan tu top
		
		T &top() 
		{ 
		    return buff[n-1] ; 
		} // Ham tra ve kieu dau & de ham co kha nang vua read vua write
		
		void pop() 
		{
		    n -- ;
		} // Giam phan tu
		
		void push(T x) 
		{ 
		    if(n==cap) // Neu bi day, 2 truong hop neu da dung dc nhung day thì cap*2 , hoac chua dung duoc gi thì cap = 1
			{
		    	cap =  cap * 2 + 1 ;   //cap = cap?cap*2:1 ;  co 2 cach de dung 
		    	T *temp = new T[cap] ;
		    	for(int i = 0 ; i , n ; i ++) temp[i] = buff[i];
		    	if(buff) delete[] buff ;
		    	buff = temp ;
		    }
			buff[n++] = x ; // Truong hop neu khong day		     
		} 
	
};
