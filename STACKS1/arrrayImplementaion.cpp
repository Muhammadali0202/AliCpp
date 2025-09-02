#include <iostream>
using namespace std;
class Stack{
    public:
    int arr[5];
    int idx = -1;

    void push(int val){
        if(idx == 4){
            cout << "Stack is full" << endl;
            return;
        }
        idx++;
        arr[idx] = val;
    }

    void pop(){
        if(idx == -1){
            cout << "Stack is Empty"<< endl;
            return;
        }
        idx--;
    }

    int top(){
        if(idx == -1){
            cout << "Stack is Empty"<< endl;
            return;
        }
        return arr[idx];
    }

    int size(){
        return idx+1;
    }
};
int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<st.size() << endl;
    cout<< st.top() << endl;

}
