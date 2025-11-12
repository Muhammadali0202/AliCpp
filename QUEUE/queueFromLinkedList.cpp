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
class Queue{ //user defined data structure
	public:
	Node* head;
	Node* tail;
	int size = 0;
	
	Queue(){
		head = tail = NULL;
		size = 0;
	}
	
	void push(int val){
		Node* temp = new Node(val);
		if(size == 0) head = tail = temp;
		else{
			tail->next = temp;
			tail = temp;
		}
		size++ ;
	}
	
	void pop(){
		if(size == 0){
			cout << "List is Empty!" << endl;
			return;
		}
        Node temp = head;
		head = head->next;
		size--;
        delete(temp);
	}
	
    int front(){
        if(size ==0){
            cout << "Queue is empty";
            return -1;
        }
        return head->val;
    }

    int back(){
        if(size == 0){
            cout << "Queue is empty";
            return -1;
        }
        return tail->val;
    }

	void display(){
		Node* temp = head;
		while(temp != NULL){
			cout << temp->val << " ";
			temp = temp->next;
		}
		cout << endl;
	}

    int Size(){
        return size;
    }

    bool empty(){
        if(size == 0){
            return true;
        }else false;
    }
};
int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();
    q.push(50);
    q.push(60);
    q.display();
    q.pop();
    q.display();
}