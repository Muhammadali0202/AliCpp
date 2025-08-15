#include <iostream>
using namespace std;
class Node{
	public:
		int val;
		Node* next;
		Node(int val){
			this->val = val;
			this->next = NULL;
		}
};
void display(Node* head){
	Node* temp = head;
	while(temp!=NULL){
		cout << temp->val << " ";
		temp = temp->next; 
		cout << endl;
	}
}

void displayRec(Node* head){
	if(head == NULL) return;// base case
	cout << head->val << " "; // call 
	displayRec(head->next); // kaam
}

void revDisplayRec(Node* head){
	if(head == NULL) return;// base case
	revDisplayRec(head->next); // kaam
	cout << head->val << " "; // call 
}

int size(Node* head){
	int n = 0;
	Node* temp = head;
	while(temp!=NULL){
		n++;
		temp = temp->next; 
	}
	return n;
}

void insertAtEnd(Node* head, int val){
	Node *t = new Node(val);
	while(head->next != NULL){
		head = head->next;
	}
	head->next = t;
}
int main(){
	Node *a = new Node(10);
	Node *b = new Node(20);
	Node *c = new Node(30);
	Node *d = new Node(40);
	
	a->next = b;
	b->next = c;
	c->next = d;
	
//	Node* temp = a;
//	cout << a->next->next->next->val;
//	while(temp!=NULL){
//		cout << temp->val << " ";
//		temp = temp->next; 
//	}
//	display(a);
	displayRec(a);
	cout << endl;
	revDisplayRec(a);
	cout << endl;
	cout << size(a);
	insertAtEnd(a,50);
	displayRec(a);
} 