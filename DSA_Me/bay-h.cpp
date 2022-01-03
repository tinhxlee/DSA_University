#include<iostream>
#include<string>
using namespace std;
string ten(string s)
{
	int x=0;
		for(int i=s.size()-1; i>0; i--)
	{
		if(s[i]==' ')
		{
			x=i;
			break;
		}
	}
	string g="";
	for(int j=x+1; j<s.size(); j++)
	{
		g+=s[j];
	}
	return g;
}
void ten_dem(string s)
{
	int x=0;
	for(int i=0; i<s.size(); i++)
	{
		if(s[i]==' ')
		{
			x=i;
		}
	}
	for(int j=0; j<=x; j++)
	{
		cout<<s[j];
	}
}
void chuan_hoa(string t)
{
	while(t[0]==' '){
		t.erase(t.begin()+0);
	}
	while(t[t.size()-1]==' '){
		t.erase(t.begin()+t.size()-1);
	}
	for(int i=0; i<t.size(); i++){
		if(t[i]==' ' && t[i+1]==' '){
			t.erase(t.begin()+i);
			i--; 
		}
	}
	for(int i=0; i<t.size(); i++){
		t[i]=tolower(t[i]);
	}
	for(int i=0; i<t.size();i++){
		if(t[i]==' ' && t[i+1]!=' '){
			t[i+1]=toupper(t[i+1]);
		}
	}
	t[0]=toupper(t[0]);
	cout<<t;
}
int main()
{
	string s;
	cout<<"Nhap s = "; getline(cin,s);
	cout<<"Ten la: "<<ten(s);
	cout<<"\nTen dem: "; ten_dem(s);
	cout<<"\nChuan hoa: "; chuan_hoa(s);

	
	return 0;
}
