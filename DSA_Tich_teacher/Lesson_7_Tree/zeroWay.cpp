#include<bits/stdc++.h>
using namespace std;
struct node
{
    int elem;
    vector<node*> child ;
    node(int n){
        elem = n;
        for(int a = 1; a * a <= n ; a ++){
            if(n % a == 0) child.push_back(new node((a - 1) * (n /a + 1)));
        }
    }
};
void inorder(node *H){
    if(!H) return ;
    if(H->child.size()) inorder(H->child[0]) ;
    cout << H->elem << " ";
    for(int i = 1 ; i < H->child.size() ; i ++) inorder(H->child[i]);
}
void preorder(node *H){
    if(!H) return;
    cout << H->elem << " ";
    for(auto c:H->child) preorder(c);
}
void postorder(node *H){
    if(!H) return ;
    for(auto c:H->child) postorder(c) ;
    cout << H->elem << " ";
}
int main() {
    int n;
    cin >> n;
    node *H = new node(n) ;
    preorder(H); cout << "\n";
    inorder(H); cout << "\n";
    postorder(H) ; cout << "\n";
}