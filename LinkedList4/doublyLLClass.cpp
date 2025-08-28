#include <iostream>
using namespace std;
class Node{ // user defined class
	public:
		int val;
		Node* next;
        Node* prev;
		Node(int val){
			this->val = val;
			this->next = NULL;
            this->prev = NULL;
		}	
};
class DLL{ //user defined data structure
	public:
	Node* head;
	Node* tail;
	int size = 0;
	
	DLL(){
		head = tail = NULL;
		size = 0;
	}
	
	void insertAtEnd(int val){
		Node* temp = new Node(val);
		if(size == 0) head = tail = temp;
		else{
			tail->next = temp;
            temp->prev = tail; // extra
			tail = temp;
		}
		size++ ;
	}
	
	void insertAtStart(int val){
		Node* temp = new Node(val);
		if(size==0) head = tail = temp;
		else{
			temp->next = head;
            head->prev = temp; // extra
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
            t->prev = temp; //extra
            t->next->prev = temp; //extra  
			size++;
		} 
	}
	
	void deleteAtStart(){
		if(size == 0){
			cout << "List is Empty!" << endl;
			return;
		}
		head = head->next;
        if(head)head->prev = NULL; // extra
        if(head == NULL) tail = NULL; //extra
		size--;
	}
	
	void deleteAtEnd(){
		if(size == 0){
			cout << "List is Empty!" << endl;
			return;
		}
        else if(size == 1){ // Extra
            deleteAtStart();
            return;
        }
		Node *temp = tail->prev; // extra
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
            temp->next->prev = temp; //extra
			size--;
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
            if(idx < size/2){
                for(int i=0; i<=idx;i++){
				temp = temp->next;
			}
			    return temp->val;
            }
			else{
                for(int i=0; i<size-idx;i++){
				temp = temp->prev;
			}
			    return temp->val;
            }
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
    DLL list ;
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.display();
    list.insertAtEnd(40);
    list.display();
    list.insertAtStart(50); 
    list.display();
    list.insertAtIdx(2,60);
    list.display();
    list.deleteAtEnd();
    list.display();
    list.deleteAtStart();
    list.display();
    list.insertAtEnd(90);
    list.display();
    list.deleteAtIdx(3);
    list.display();
}