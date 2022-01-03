#include<bits/stdc++.h>
using namespace std ;
int main()
{
	int n ;
	int *a = new int [n] ;
	cout << "Nhap n = ";
	cin >> n ;
	for(int i = 1 ; i <=n ; i ++) 
	{
	    cout << "A[" << i << "] = ";
	    cin >> a[i] ;
	}
	for(int i = 1 ; i < n ; i ++)
	for(int j = i + 1 ; j <=n ; j ++)
	{
		if(a[i] > a[j])
		{
		    int tempt = a[i] ; a[i] = a[j] ; a[j] = tempt ;
		}
	}
	for(int i = 1 ; i <=n ; i ++) cout << "Day so tang dan cua ban la : " <<  a[i] << " ";	
}
