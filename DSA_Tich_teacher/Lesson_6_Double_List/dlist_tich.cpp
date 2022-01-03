#include<bits/stdc++.h>
using namespace std;
#ifndef __dlist__cpp__
#define __dlist__cpp__

template <class T>
class node
{
	T elem;
	node *next,*prev;
	public:
		node(T x,node<T> *P=0,node<T>*N=0) {elem=x;prev=P; next=N;}
		T &getelem() {return elem;} 
		node<T>* &getprev() {return prev;}
		node<T>* &getnext() {return next;}
};
template <class T>
class dlist_ite
{
	node<T>*cur;  //tro vao vi tri hien thoi
	public:
		node<T>* getcur() {return cur;}
		dlist_ite(node<T>*c=0) {cur=c;}
		T&operator*() {return cur->getelem();}
		dlist_ite<T> operator++(int) //it++
		{
			dlist_ite<T> tem(cur);
			cur=cur->getnext();	
			return tem;
		}	
		dlist_ite<T> &operator++()	//++it
		{
			cur=cur->getnext();
			return *this;
		}
		//operator=
		bool operator!=(dlist_ite<T> sit) {return cur!=sit.cur;}
		bool operator==(dlist_ite<T> sit) {return cur==sit.cur;}
};
template <class T>
class dlist_rite
{
	node<T>*cur;  //tro vao vi tri hien thoi
	public:
		node<T>* getcur() {return cur;}
		dlist_rite(node<T>*c=0) {cur=c;}
		T&operator*() {return cur->getelem();}
		dlist_rite<T> operator++(int) //it++
		{
			dlist_rite<T> tem(cur);
			cur=cur->getprev();	
			return tem;
		}	
		dlist_rite<T> &operator++()	//++it
		{
			cur=cur->getprev();
			return *this;
		}
		//operator=
		bool operator!=(dlist_rite<T> sit) {return cur!=sit.cur;}
		bool operator==(dlist_rite<T> sit) {return cur==sit.cur;}
};

template <class T>
class dlist   //double list
{
	node<T>*Head,*Trai;   //Head tro den phan tu dau danh sach, Trai tro phan tu cuoi ds
	unsigned n;
		void Delete()
		{
			node<T> *p=Head;
			while(p)
			{
				p=p->getnext();
				delete Head;
				Head=p;
			}
		}
	public:
		typedef dlist_ite<T> iterator;
		iterator begin() {return Head;}
		iterator end() {return 0;}
		typedef dlist_rite<T> reverse_iterator;
		reverse_iterator rbegin() {return Trai;}
		reverse_iterator rend()   {return 0;}
		
		dlist(){Head=Trai=0;n=0;}
		dlist(dlist<T> &sL)
		{
			//cout<<"\ncopy\n";
			Head=Trai=0;n=0;
			for(auto z:sL) push_back(z);
		}
		dlist(int k,T x)
		{
			Head=Trai=0;n=0;
			while(k--) push_back(x);
		}
		~dlist()
		{
			clear();
		}
		void clear()
		{
			Delete(); n=0;
		}
		bool empty() {return n==0;}
		unsigned size() {return n;}
		T &front() {return Head->getelem();}
		T &back()  {return Trai->getelem();}
		void push_back(T x)  
		{
			if(n==0) Head=Trai=new node<T>(x);
			else Trai = Trai->getnext() = new node<T>(x,Trai,0);
			n++;
		}
		void push_front(T x) 
		{
			if(n==0) Head=Trai=new node<T>(x);
			else   Head = Head->getprev() = new node<T>(x,0,Head);
			n++;
		}
		void pop_back()
		{
			if(n==1) {delete Head; Head=Trai=0;}
			else
			{
				node<T> *p=Trai;
				Trai=Trai->getprev(); 
				Trai->getnext()=0;
				delete p;
			}
			n--;
		}
		void pop_front()
		{
			if(n==1) {delete Head; Head=Trai=0;}
			else 
			{
				node<T> *p=Head;
				Head=Head->getnext(); 
				Head->getprev()=0;
				delete p;
			}
			n--;
		}
		void travel()
		{
			for(node<T>*p=Head;p;p=p->getnext()) cout<<p->getelem()<<" ";
		}
		void insert(iterator it,T x)
		{
			if(it==begin()) return push_front(x);
			if(it==end()) return push_back(x);
			node<T> *p=it.getcur()->getprev();
			node<T> *q=new node<T>(x,p,it.getcur());
			p->getnext()=q;
			it.getcur()->getprev()=q;
			n++;
		}
		void erase(iterator it)	
		{
			if(it==end()) return;
			if(it==begin()) return pop_front();
			if(it.getcur()==Trai) return pop_back();
			node<T>*p=it.getcur()->getprev();
			node<T>*q=it.getcur()->getnext();
			p->getnext()=q;
			q->getprev()=p;
			delete it.getcur();
			n--;
		}
		void erase(T x)
		{
			node<T>*p=Head;
			while(p && p->getelem()!=x) p=p->getnext();
			if(p) erase(p); 
		}
		void sort()
		{
			for(node<T>*p=Head;p;p=p->getnext())
			for(node<T>*q=p->getnext();q;q=q->getnext())
			if(p->getelem()>q->getelem()) swap(p->getelem(),q->getelem());
		}
};
#endif

// int main()
// {
// 	dlist<int> L(3,5);
// 	L.push_back(7);
// 	L.push_back(8);
// 	L.push_front(6);
// 	L.push_front(3);
// 	cout<<"\nList : ";L.travel();
// 	L.front()=L.back()=10;
// 	cout<<"\nList : "; for(dlist<int>::iterator it=L.begin();it!=L.end();++it) cout<<*it<<" ";
// 	L.pop_back(); L.pop_front();
// 	cout<<"\nList : "; 	for(auto x:L) cout<<x<<" ";
// 	auto it=L.begin(); it++; ++it;
// 	L.insert(it,0);
// 	cout<<"\nList : "; 	for(auto x:L) cout<<x<<" ";
// 	it=L.begin(); it++; ++it; it++;it++;
// 	L.erase(it);
// 	L.erase(L.begin());
// 	L.erase(L.end());
// 	cout<<"\nList : "; 	for(auto x:L) cout<<x<<" ";
// 	L.erase(7);
// 	cout<<"\nList : "; 	for(auto x:L) cout<<x<<" ";
// 	for(int i=1;i<10;i++) i%2?L.push_front(i):L.push_back(i);
// 	cout<<"\nList : "; 	for(auto x:L) cout<<x<<" ";
// 	cout<<"\nDao  : ";  for(auto rit=L.rbegin();rit!=L.rend();rit++) cout<<*rit<<" " ;
// 	L.sort();
// 	cout<<"\nList : "; 	for(auto x:L) cout<<x<<" ";
	
// }



