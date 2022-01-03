#ifndef __dlist__cpp__
#define __dlist__cpp__
using namespace std ;
template<class T>
class node{
    private:
        T elem ;
        node *next, *prev ;
    public:
        node(T x, node<T> *P = 0, node<T> *N = 0){
            elem = x ;
            prev = P ;
            next = N ;
        }
        T &getElem(){ return elem ;}
        node<T> *getNext(){ return next ;}
        node<T> *getPrev() { return prev ;}
        void setElem(T x) { elem = x ;}
        void setNext(node<T> *N = 0){ next = N ;}
        void setPrev(node<T> *P = 0){ prev = P ;}
};
template < class T>
class dlist_ite{
    private:
        node <T> *curr ;
    public:
        dlist_ite(node <T> *c = 0){curr = c;}
        bool operator!=(dlist_ite<T> it){return curr != it.curr ;}
        bool operator==(dlist_ite<T> it){return curr == it.curr ;}
        node<T> *&getCur(){return curr ;}
        dlist_ite<T> operator++(int){ // it++
            dlist_ite <T> z = curr ;
            curr = curr ->getNext();
            return z ;
        }
        dlist_ite<T> &operator++(){ //++it
            curr = curr -> getNext();
            return *this ;
        }
        T &operator*(){return curr->getElem() ;}
};

template < class T>
class dlist_rite{
    private:
        node <T> *curr ;
    public:
        dlist_rite(node <T> *c = 0){curr = c;}
        bool operator!=(dlist_rite<T> it){return curr != it.curr ;}
        bool operator==(dlist_rite<T> it){return curr == it.curr ;}
        node<T> *&getCur(){return curr ;}
        dlist_rite<T> operator++(int){ // it++
            dlist_rite <T> z = curr ;
            curr = curr ->getPrev();
            return z ;
        }
        dlist_rite<T> &operator++(){ //++it
            curr = curr -> getPrev();
            return *this ;
        }
        T &operator*(){return curr->getElem() ;}
};

template<class T>
class dlist{
    private:
        node<T> *head = 0, *trail = 0;
        int n ;
    public:

        typedef dlist_ite<T> iterator ;
        iterator begin(){return iterator(head) ;} 
        iterator end(){return iterator(0) ;} 

        typedef dlist_rite<T> reverse_iterator ;
        reverse_iterator rbegin() {return reverse_iterator(trail) ;}
        reverse_iterator rend() {return reverse_iterator(0) ;}

        dlist(){n = 0 ; head = trail = 0 ;}

        dlist(int k, T x){
            n = 0 ; head = trail = 0;
            while(k--) push_back(x);
        }

        int size(){return n ;}
        bool empty(){return n = 0 ;}
        void push_front(T x){
            if(n == 0) head = trail = new node<T> (x) ;
            else{
                node<T> *p = new node<T>(x,0,head);
                head->setPrev(p);
                head = p ;
            }
            n ++ ;
        }
        void push_back(T x){
            if(n == 0) head = trail = new node<T> (x) ;
            else{
                node<T> *p = new node<T>(x,trail,0);
                trail->setNext(p);
                trail = p ;
            }
            n ++ ;
        }
        void pop_front(){
            if(n == 1){delete head ;trail = head = 0 ;}
            else{
                node<T> *p = head->getNext();
                delete head ;
                p->setPrev(0);
                head = p ;
            }
            n -- ;
        }
        void pop_back(){
            if(n == 1) {delete head ;trail = head = 0 ;}
            else{
                node<T> *p = trail->getPrev();
                delete trail ;
                p->setNext(0);
                trail = p ;
            }
            n -- ;
        } 

        T &front(){return head->getElem();}
        T &back(){return trail->getElem();}

        void insert(iterator it, T x){
            if(it.getCur() == head) return push_front(x);
            else{
                node<T> *p = it.getCur() ->getPrev();
                node<T> *q = new node<T>(x,p,it.getCur());
                p->setNext(q) ;
                it.getCur()->setPrev(q);
                n ++ ;
            }
        }
        void remove(iterator it){
            if(it.getCur() == head) return pop_front(); 
            if(it.getCur() == trail) return pop_back() ;
            node<T> *p = it.getCur()->getPrev();
            node<T> *q = it.getCur()->getNext() ;
            p->setNext(q);
            q->setPrev(p);
            delete it.getCur() ;
            n -- ;
        }
        void sort(){
            for(node<T> *p = head; p; p = p->getNext())
            for(node<T> *q = p->getNext(); q ; q = q->getNext())
            if(p->getElem() > q->getElem()) swap(p->getElem(), q->getElem());
                
            
        }
        iterator find(T x){
            node<T> *p = head ;
            while(p && p -> getElem() != x) p = p->getNext();
            return iterator(p) ;
        }
};
#endif