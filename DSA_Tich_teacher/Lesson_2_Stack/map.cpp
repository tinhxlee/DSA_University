// Map
#include<bits/stdc++.h>
using namespace std ;
int main()
{
//	map<int,int> M ;   // La mot anh xa tu tap A sang tap B
//	M[5] = 6 ;
//	M[-2] = 3 ;
//	M[4] = 1 ;
//	for(auto x:M) cout << x.first << " "  << x.second << endl ;
	map<int,string> M = {{61,"MS"},{62,"SL"},{63,"DBP"}};
	int ma ;
	cin >> ma ;
	if(M.find(ma) == M.end()) cout << "DDD";
	else cout << M[ma];
}
