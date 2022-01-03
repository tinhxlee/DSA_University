#ifndef __slist__cpp
#define __slist__cpp
#include<bits/stdc++.h>
using namespace std ;
template <class T>
class node{
    private:
        T elem ;
        node *next ;
    public:
        node(T x, node *n = 0){ elem = x ; next = n ;}
        void setElem(T x){ elem = x ;}
        void setNext(node <T> *n){ next = n ;}
        T &getElem(){ return elem ;}
        node<T> *getNext(){ return next ;}
};
template < class T>
class slist_ite{
    private:
        node <T> *curr ;
    public:
        slist_ite(node <T> *c = 0){curr = c;}
        bool operator!=(slist_ite<T> it){return curr != it.curr ;}
        node<T> *&getCur(){return curr ;}
        slist_ite<T> operator++(int){ // it++
            slist_ite <T> z = curr ;
            curr = curr ->getNext();
            return z ;
        }
        slist_ite<T> &operator++(){ //++it
            curr = curr -> getNext();
            return *this ;
        }
        T &operator*(){return curr->getElem() ;}
};
template <class T>
class slist{
    private:
        node<T> *head, *trail ; // 2 con tro dau va duoi
        int n ; // so phan tu
    public:
        typedef slist_ite<T> iterator ;
        iterator begin(){return iterator(head) ;} // ep kieu
        iterator end(){return iterator(0) ;}
        slist(){n = 0 ; head = trail = 0 ;}
        slist(int k, T x){
            n = 0 ; head = trail = 0;
            while(k --) push_back(x);
        }
        bool empty(){ return n = 0 ;}
        int size(){ return n ;}
        void push_front(T x){
            head = new node<T>(x, head);
            if(n == 0) trail = head ;
            n ++ ;
        }
        void push_back(T x){
            if(n == 0) return push_front(x);
            trail ->setNext(new node<T>(x));
            trail = trail ->getNext() ;
            n ++ ;
        }
        T &front(){return head -> getElem() ;}
        T &back(){return trail -> getElem() ;}   
        void pop_front(){
            node<T> *p = head -> getNext() ;
            delete head ;
            head = p ;
            if(n == 1) trail = 0 ;
            n -- ;
        }
        void pop_back(){
            if(n == 1) return pop_front();
            node<T> *p = head ;
            while(p -> getNext() != trail) p = p->getNext() ;
            p->setNext(0);
            trail = p ;
            n -- ;
        }
        void travel(){
            for(node<T> *p = head ; p ; p = p->getNext()) cout << p->getElem() << " ";
        }
        void insert(iterator it, T x){
            // cach 1
            if(it.getCur() == head) return push_front(x);
            node<T> *p = head ;
            while(p->getNext() != it.getCur()) p = p->getNext();
            p->setNext(new node<T>(x,it.getCur()));
            // Cach 2

        }
        void erase(iterator it){
            if(it.getCur() == head) return pop_front();
            if(it.getCur() == trail) return pop_back();
            node<T> *p = head ;
            while(p->getNext() != it.getCur()) p = p->getNext();
            p->setNext(it.getCur()->getNext());
            it = p ;
            n -- ;
        }
};
// int main(){
//     slist<int> L(5,5);
//     cout << "\nlist : "; L.travel();
//     L.push_back(9); cout << "\nlist : "; L.travel();
//     L.push_front(69); cout << "\nlist : "; L.travel();
//     L.pop_back(); cout << "\nlist : "; L.travel();
//     L.pop_front(); cout << "\nlist : "; L.travel();
//     L.back() = 9 ; cout << "\nlist : "; L.travel();
//     cout << "\nlist : ";for(slist<int>::iterator it = L.begin() ; it != L.end() ; it ++) cout << *it << " ";
//     auto it = L.begin(); it ++ ; it ++ ;
//     L.insert(it,66);
//     cout << "\nlist : ";for(auto x : L) cout << x << " ";
//     it = L.begin(); it ++ ; it ++ ;
//     L.erase(it);
//     cout << "\nlist : ";for(auto x : L) cout << x << " ";
//     int k = 1 ;
//     for(it = L.begin(); k <= L.size() ; k ++) it ++ ;
//     L.erase(it);
//     cout << "\nlist : ";for(auto x : L) cout << x << " ";
// }
#endif