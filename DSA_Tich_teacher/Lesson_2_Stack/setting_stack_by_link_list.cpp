// Cai dat stack bang link list
#ifndef __stack_by_list__cpp__
#define __stack_by_list__cpp__
template<class T>
struct node{
	T elem;
	node *next ;
	node(){
	}
	node(T e, node *n = 0){
		elem = e  ;
		next = n ;
	}
};
template<class T>
class STACK{
	private:
		int n ; // so phan tu dang luu trong stack
		node<T> *h ; // con tro quan ly dau danh sach moc noi
	public:
		STACK(){
		}
		STACK(int N = 0, node<T> *H = 0){ // tao 1 stack rong
			n = N ;
			h = H ;
		}
		bool empty(){
			return n == 0 ;
		}
		int size(){
			return n ;
		}
		void push(T x){
			h = new node<T>(x,h);
			n ++ ;
		}
		void pop(){
			h = h->next ;
			n -- ;
		}
		T &top(){
			return h->elem ;
		}
};
#endif
