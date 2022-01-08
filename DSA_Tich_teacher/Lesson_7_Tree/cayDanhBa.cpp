#include<bits/stdc++.h>
using namespace std ;

struct node { 
    node *child[10] = {} ; // 1 mang cac node con, ban dau toan 0
    bool leaf; // biến đánh dấu lá của cây.

    node(){leaf = 0 ;} // Hàm tạo
};

bool add(node *&T, char *p) { // Không có tiền tố trả về true
    if(T ->leaf) return 0; // nếu đến lá thì return 0
    if(*p == 0)
    {
        T->leaf = 1;
        return true ;
    }
    if( *(p + 1) == 0 and T -> child[*p - '0'] != 0) return 0;
    if(T -> child[*p - '0'] == 0) T -> child[*p - '0'] = new node();
    return add(T -> child[*p - '0'], p + 1);
}
int slove() {
    int n; // số danh bạ
    char x[100];
    scanf("%d\n", &n);
    node *T = new node();
    while(n --)
    {
        scanf("%s",x);
        bool kq = add(T,x);
        if(kq == 0)
        {
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
}
int main()
{
    freopen("danhba.txt", "r", stdin);
    int t;
    scanf("%d\n", &t);
    while(t --)  slove();
}