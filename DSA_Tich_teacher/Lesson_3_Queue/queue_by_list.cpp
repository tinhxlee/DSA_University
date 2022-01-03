#ifndef __queue__by__list__cpp
#define __queue__by__list__cpp
template <class T>
struct Node{
	T elem ;
	Node *next ;
	Node(T x){
		elem = x ;
		next = 0 ;
	}
};
template <class T>
class Queue{
	private:
		int n ; // so phan tu
		Node<T> *F, *L ; // 2 con tro first va last
	public:
		Queue(){
			n = 0 ;
			F = L = 0 ;
		}
		int size(){
			return n ;
		}
		bool empty(){
			return n == 0 ;
		}
		void push(T x){
			if(n){
				L -> next = new Node<T>(x); // tao mot node moi sau L
				L = L -> next ; // Gan L hien thoi cho L moi
			}
			else{
				F = L = new Node<T>(x);
			}	
			n ++ ;
		}
		void pop(){
			n -- ;
			F = F -> next ;
			
		}
		T &front(){
			return F -> elem ;
			
		}
		T &back(){
			return L -> elem ;
			
		}		
};
#endif
