#include<bits/stdc++.h>
using namespace std ;
class DT{
	private:
		vector<double> F ; // cac he so cua da thuc
	public:
		void rg(){
			while(F.size() && F.back() == 0) F.pop_back();
		}
		friend istream &operator>>(istream &is, DT &d){
			int n ;
			is >> n  ; // Nhap bac
			d.F.resize(n+1);
			for(double &x:d.F){
				is >> x ;
			}
			return is ;
		}
		friend ostream &operator<<(ostream &os, DT d){
			if(d.F.size()){
					for(double x:d.F){
					os << setprecision(2) << fixed << x << " " ;
				}
			}
			else{
				cout << "0.00" ;
			}
			return os ;
		}
		friend DT operator+(DT P, DT Q){
			DT R ;
			R.F.resize(max(P.F.size(),Q.F.size()),0);
			for(unsigned int i = 0 ; i < P.F.size(); i ++) R.F[i] += P.F[i];
			for(unsigned int i = 0 ; i < Q.F.size(); i ++) R.F[i] += Q.F[i];
			R.rg();
			return R ;
		}
};
int main(){
	DT P,Q,R ;
	cin >> P >> Q >> R ;
	cout << P + Q + R ;
}
