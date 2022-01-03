#ifndef __vector__cpp
#define __vector__cpp
#include<bits/stdc++.h>
using namespace std ;
template <class T>
class V_rit{
	private:
		T *cur ; // con tro hien thoi
	public:
//		T *getcur(){
//			return cur ;
//		}
		V_rit(T *c){
			cur = c ;
		}
		T &operator*(){
			return *cur ;
		}
		V_rit operator++(int){ // it++
			V_rit p(cur);
			cur = cur - 1 ;
			return p ;
		}
		V_rit operator++(){ // ++it
			cur = cur -1   ;
			return cur ;
		}
		bool operator!=( V_rit<T> rit){
			return cur != rit.cur ;
			
		}
};
template <class T>
class Vector{
	T *buff ;
	int n, cap ;
	void extend(int c){
		if(c < cap) return  ;
		cap = c ;
		T *temp = new T[c];
		for(int i = 0 ; i < n ; i ++) temp[i] = buff[i];
		if(buff) delete[] buff ;
		buff = temp ;
	}
	public:
		typedef T *iterator ; // bo lap xuoi
		iterator begin(){
			return buff ;
		} 
		iterator end(){
			return buff + n ;
			
		}
		typedef V_rit<T> reverse_iterator ;
		reverse_iterator rbegin(){
			return buff + n -1 ;
		}
		reverse_iterator rend(){
			return buff - 1 ;
			
		}
		Vector(){
			buff = 0 ;
			n = cap = 0 ;
		}
		Vector(int N, T x){
			cap = n = N ;
			buff = new T[N];
			for(int i = 0 ; i < n ; i ++) buff[i] = x ;
		}
		Vector(int N){
			cap = n = N ;
			buff = new T[N];
		}
		~Vector(){
			if(buff) delete[] buff ;
		}
		Vector(const Vector<T> &Z){ // toan tu coppy
			this->n = Z.n ;
			this->cap = Z.cap;
			this->buff = new T[cap];
			for(int i = 0 ; i < n ; i ++) buff[i] = Z.buff[i];
		}
		int size(){
			return n ;
		}
		int capacity(){
			return cap ;
		}
		bool empty(){
			return n == 0 ;
		}
		T &front(){
			return buff[0];
		}
		T &back(){
			return buff[n -1];
		}
		void pop_back(){
			n -- ;
		}
		void push_back(T x){
			if(n == cap) extend(cap * 2 + 1);
			buff[n ++] = x ;
		}
		T &operator[](int k){
			return buff[k];
		}
		T &at(int k){
			return buff[k];
		}
		Vector<T> &operator=(const Vector<T> &Z){
			this->n = Z.n ;
			this->cap = Z.cap;
			if(this->buff) delete[] buff ;
			this->buff = new T[cap];
			for(int i = 0 ; i < n ; i ++) buff[i] = Z.buff[i];
			return *this ;
		}
		void insert(iterator &it, T x){ // chen vao vi tri it nao do 1 gia tri x
			if(n == cap){
				int k = it - buff ;
				extend(cap * 2 + 1);
				it  = buff + k ;
			}
			for(T  *c = buff + n ; c != it ; c -- ) *c = *(c - 1) ;
			*it  = x ;
			n ++ ;
		}
		void erase(iterator it){ // xoa 1 vi tri bo lap tro toi
			while(it < buff + n - 1){
				*it = *(it + 1); 
				it ++ ;
			} 
			n -- ;
		}
		void resize(int k){
			if(cap < k) extend(k);
			n = k ;
		}
		void resize(int k, T x){
			if(cap < k) extend(k);
			for(int i = n ; i < k ; i ++) buff[i] = x ;
			n = k ;
		}
		T *data(){
			return buff ;
		}
};
#endif
