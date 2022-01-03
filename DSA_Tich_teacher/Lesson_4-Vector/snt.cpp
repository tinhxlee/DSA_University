#include<bits/stdc++.h>
using namespace std ;
bool ktsnt(int n)
{
   if(n == 2) return 1 ;
   if(n < 2 || n % 2 == 0) return 0 ;
   for(int i = 3 ; i * i <= n ; i += 2)
   {
      if(n % i == 0 ) return 0 ;
      return 1 ;      
   }
}
int main()
{
   int n ;
   cout << "Nhap n = ";
   cin >> n ; 
   if(ktsnt(n) == 0) cout << "So nay khong phai so nguyen to";
   else cout << "So nay la so nguyen to" ;   
}
