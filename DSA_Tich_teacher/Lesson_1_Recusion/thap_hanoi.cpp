#include<iostream>
#define cout std :: cout
#define cin std :: cin 
int d = 0 ;
void thaphn(const int &n, const char &A, const char &B, const char &C)
{
	if(n == 1) cout << "\nBuoc" << ++d << " Chuyen dia " << n << " tu " << A << " sang " << B ;
	else
	{
		thaphn(n - 1, A, C, B);
		cout << "\nBuoc" << ++d << " Chuyen dia " << n << " tu " << A << " sang " << B ;
		thaphn(n-1,C, B ,A);
	}
}
int main()
{
	int n ;
	cin >> n ;
	thaphn(n,'A','B','C');
}
