#include<iostream>
#include <vector>
using namespace std;
class MyCircularQueue {
public:
        int f;
        int b;
        int s;
        int c;
        vector <int> arr;
    MyCircularQueue(int k) { // k is capacity
        f=0;
        b=0; 
        s=0;
        c=k;
        vector <int> v(k);
        arr=v;
    }
    
    bool enQueue(int val) { // push
        if(s==c) return false;
        arr[b]=val;
        b++;
        if(b==c) b=0;
        s++;
        return true;
    }
    
    bool deQueue() { // pop
        if(s==0) return false;
        f++;
        if(f==c) f = 0;
        s--;
        return true;
    }
    
    int Front() { // value on front
        if(s==0) return -1;
        return arr[f];
    }
    
    int Rear() { // value on back
        if(s==0) return -1;
        if(b==0) return arr[c-1];   
        return arr[b-1];
    }
    
    bool isEmpty() { // empty
        if(s==0) return true;
        else return false;
    }
    
    bool isFull() { //full
        if(s==c ) return true;
        else return false;
    }
    
    //
    // void display(){
    //     if(isEmpty()) return ;
    //     else{
    //         int i=f;
    //         while(i!=b){
    //             cout << arr[i];
    //             i=(i+1)%c;
    //         }
    //         cout << arr[b];
    //     }
    // }
};

int main(){
    MyCircularQueue cq(5);
    cq.enQueue(10);
    cq.enQueue(20);
    cq.enQueue(30);
    cq.enQueue(40);
    cq.enQueue(50);
    cq.deQueue();
    cq.enQueue(60);
    cq.display();
}

