// Danh sách liên kết đơn
#include<iostream>
#define endl "\n"
using namespace std ;
struct node{
	int elem ; // element
	node *next ;
	node(int x, node *N = 0){
		elem = x ;
		next = N ;
		// Tạo một node
	}
};

void addFirst(int x, node *&H){
	H = new node(x,H) ;
}
void addLast(node *&H, int x){
	if(!H) H = new node(x);
	else{
		node *p = H ;
		while(p->next){
			p = p->next ;
		}
		p->next = new node(x);
	}
}
void travel(node *H){
		for(node *p = H; p != NULL; p = p->next){
		cout << p->elem << " ";
	}
}
int main()
{
	// node A(3), B(7,&A), C(4, &B) ; // Danh sách liên kết
	// node *D = new node(8,&C);
	// node E(2,D);
	// for(node *p = &E; p != NULL; p = p->next){
	// 	cout << p->elem << " ";
	// }
	
	node *H = NULL ;
	for(int i = 1 ; i < 8 ; i ++){
		addFirst(i,H);
	}
	cout << endl << "Danh sach : ";
	travel(H);
	for(int i = 1 ; i < 8 ; i ++){
		addLast(H,i);
	}
	cout << endl << "Danh sach : ";
	travel(H);

}