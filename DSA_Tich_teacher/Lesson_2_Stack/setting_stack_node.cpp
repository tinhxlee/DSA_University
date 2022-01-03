#ifndef __setting__stack__node__cpp__
#define __setting__stack__node__cpp__
template <class T>
struct node{
    T elem ;
    node *next ;
    node(){}
    node(T x, node *N = 0){
        elem = x ;
        next = N ;
    }
};
template <class T>
class STACK{
    private:
        int n ; // Số phần tử hiện có trong stack
        node<T> *H ; // con trỏ quản lý đầu danh sách móc nối.
    public:
        STACK(){
            n = 0 ;
            H = 0 ;
            // Tạo stack rỗng.
        }
        bool empty(){
            return n == 0;
        }
        int size(){
            return n ;
        }
        void push(T x){
            H = new node<T> (x,H);
            n ++ ;
        }
        void pop(){
            H = H->next ;
            n -- ;
        }
        T &top(){
            return H->elem ;
        }

};
#endif
