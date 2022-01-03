/*Lập các hàm sau:
1. Viết hàm trả lại tên của một người khi biết họ và tên
Ví dụ:
Input: nguYen Van nAm
Outout: NAm
2. Viết hàm trả lại họ và tên đệm của một người khi biết họ và tên
Ví dụ:
Input: nguYen Van nAm
Outout: nguYen Van
3. Viết 1 hàm chuẩn hóa họ và tên của 1 người theo nguyên tắc, họ tên chuẩn là các chữ cái đừng đầu các từ được viết hoa, các chữ cái còn lại là các chữ thường.
Ví dụ:
Input: nguYen Van nAm
Outout: Nguyen Van Nam*/


#include<bits/stdc++.h>
using namespace std;

void tach_ten(string &s){
   int n = s.length();
   int vi_tri = s.rfind(' ') + 1;
   cout << s.substr(vi_tri, n-vi_tri);
}

void tach_ho_dem(string &s){
   int n = s.length();
   int vi_tri = s.rfind(' ');
   cout << s.substr(0,vi_tri);
}

void chuan_hoa(string &s){
   int n = s.length();
   if(s[0]>='a') s[0] -=32;
   for(int i=1;i<n;i++){
      if(s[i]>='A' && s[i]<='Z') s[i] += 32;   
   }
   for(int i=1;i<n;i++){
      if(s[i] == ' ') s[i+1] -=32;
   }
   cout << s;
}

int main(){
   string name;
   cout << "Nhap ho va ten: ";
   getline(cin, name);
   cout << "Ho va ten cua nhap: " << name;
   cout << "\nTen: "; tach_ten(name);
   cout << "\nHo va ten dem: "; tach_ho_dem(name);
   cout << "\nChuan hoa ten:"; chuan_hoa(name);
   return 0;
}