#include<bits/stdc++.h>
using namespace std;
struct node{
	char elem; 
	vector<node*> child;
	node(char c){elem=c;
	}
};
node *find(node *H, char x)
{
	if(!H) return 0;
	if(H->elem==x) return H;
	for(auto c:H->child)
	{
		node *p=find(c,x);
		if(p) return p;
	}
	return 0;
}
void add(node *H,char a,char b) //them vao cay H mot cha a con la b
{
	node *p=find(H,a);
	if(p) p->child.push_back(new node(b));
	else cout<<"khong tim thay nut: "<<a;
	
}
void inorder(node*H){
//duyet con ca goc cac con con lai

	if(!H) return ;
	if(H->child.size()) inorder(H->child[0]);
	cout<<H->elem<<" ";
	for(int i=1; i<H->child.size();i++) inorder(H->child[i]);
}
void preorder(node *H){
	//duyet goc xong den cac con
	if(!H) return ;
	cout<<H->elem<<" ";
	for(auto c:H->child) preorder(c);
}
void postorder(node *H){
	//duyet cac con r den goc
	if(!H) return ;
	for(auto c:H->child) postorder(c);
		cout<<H->elem<<" ";
}
int main(){
	node *H=new node('A');
	freopen("giapha.cpp","r",stdin);
	int n;
	char a,b;
	cin>>n;
	while(n--)
	{
		cin>>a>>b;
		add(H,a,b);
	
		}
   cout<<"\ntien thu tu:" ;preorder(H);
   cout<<"\ntrung thu tu:" ;inorder(H);
   cout<<"\nhau thu tu:" ;postorder(H);
}
