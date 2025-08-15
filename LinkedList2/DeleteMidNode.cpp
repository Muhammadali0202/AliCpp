#include<iostream>
using namespace std;
class Node{
	public:
		int val;
		Node* next;
		Node(int val){
			this->val = val;
			this->next = 0;
		}	
};
void display(Node* head){
	while(head!= NULL){
		cout << head->val << " ";
		head = head->next;
	}
	cout << endl;
}
Node* deleteNode(Node* head, int targetVal){
	if(head->val == targetVal){
		head = head->next;
		return head;
	}
	Node* temp = head;
	while(temp->next->val != targetVal){
		temp = temp->next;
	}
	temp->next = temp->next->next;
	return head;
}

Node* deleteMidNode(Node* head){
	 int len = 0;
         Node* temp = head;
         while(temp != NULL){
             len++;
             temp = temp->next;
         }
         int midIdx = len/2;
         Node* node = head;
         for(int i= 1; i<=midIdx; i++){
             node = node->next;
         }
         return node;
//		Node* slow = head;
//        Node* fast = head;
//
//        while(fast != NULL && fast->next!=NULL){
//            slow = slow->next;
//            fast = fast->next->next;
//        }
//        return slow;
}
int main(){
	Node* a = new Node(10);
	Node* b = new Node(20);
	Node* c = new Node(30);
	Node* d = new Node(40);
	Node* e = new Node(50);	
	a->next = b;
	b->next = c;
	c->next = d;
	d->next = e;
	Node* head = a;
	display(head);
	deleteMidNode(head);
//	deleteNode(head,20);
	display(head);
}