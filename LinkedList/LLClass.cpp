#include <iostream>
using namespace std;
class Node{ // user defined class
	public:
		int val;
		Node* next;
		Node(int val){
			this->val = val;
			this->next = NULL;
		}	
};
class LinkedList{ //user defined data structure
	public:
	Node* head;
	Node* tail;
	int size = 0;
	
	LinkedList(){
		head = tail = NULL;
		size = 0;
	}
	
	void insertAtEnd(int val){
		Node* temp = new Node(val);
		if(size == 0) head = tail = temp;
		else{
			tail->next = temp;
			tail = temp;
		}
		size++ ;
	}
	
	void insertAtStart(int val){
		Node* temp = new Node(val);
		if(size==0) head = tail = temp;
		else{
			temp->next = head;
			head = temp;
		}
		size++;
	}
	
	void insertAtIdx(int idx,int val){
		if(idx<0 || idx>size){
			cout << "Invalid Index" << endl;
		}
		else if(idx == 0) insertAtStart(val);
		else if(idx == size) insertAtEnd(val);
		else{
			Node* t = new Node(val);
			Node* temp = head;
			
			for(int i = 0; i<idx-1; i++){
				temp = temp->next;
			}
			t->next = temp->next;
			temp->next = t;
			size++;
		} 
	}
	
	int getAtIdx(int idx){
		if(idx<0 || idx>=size){
			cout << "Invalid Index" << endl;
			return -1;
		}
		else if(idx == 0) return head->val;
		else if(idx == size) return tail->val;
		else{
			Node *temp = head;
			for(int i=0; i<=idx;i++){
				temp = temp->next;
			}
			return temp->val;
		}
	}
	
	void deleteAtStart(){
		if(size == 0){
			cout << "List is Empty!" << endl;
			return;
		}
		head = head->next;
		size--;
	}
	
	void deleteAtEnd(){
		if(size == 0){
			cout << "List is Empty!" << endl;
			return;
		}
		Node *temp = head;
		while(temp->next != tail){
			temp = temp->next;
		}
		temp->next = NULL;
		tail = temp;
		size--;
	}
	
	void deleteAtIdx(int idx){
		if(size == 0){
			cout << "List is Empty!" << endl;
			return;
		}
		if(idx<0 || idx>=size){
			cout << "Invalid Index" << endl;
			return;
		}
		else if(idx == 0) deleteAtStart();
		else if(idx == size) deleteAtEnd();
		else{
			Node *temp = head;
			for(int i = 1; i<=idx-1; i++){
				temp = temp->next;
			}
			temp->next = temp->next->next;
			size--;
		}
	}
	void display(){
		Node* temp = head;
		while(temp != NULL){
			cout << temp->val << " ";
			temp = temp->next;
		}
		cout << endl;
	}
};
int main(){
	LinkedList ll;
	ll.insertAtEnd(10);
	ll.insertAtEnd(80);
	ll.display();
	ll.insertAtEnd(20);
	ll.display();
	ll.insertAtStart(30);
	ll.insertAtEnd(60);
	ll.display();
	ll.insertAtIdx(2,70);
	ll.display();
	cout << ll.getAtIdx(2);
	cout << endl;
	ll.deleteAtStart();
	ll.display();
	ll.deleteAtEnd();
	ll.display();
	ll.deleteAtIdx(2);
	ll.display();
}