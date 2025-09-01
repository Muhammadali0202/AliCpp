#include <iostream>
#include <stack>
using namespace std;
void print(stack <int> st){
    stack <int> temp;
    while(st.size() > 0){
        cout << st.top() << endl;
        temp.push(st.top());
        st.pop(); 
    }

    while (temp.size()>0){ 
        int x = temp.top();
        temp.pop();
        st.push(x);
    }
    
}
int main(){
    stack <int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    print(st);
    //we will use extra stack
    stack <int> temp;
    stack <int>temp2;
    while(st.size() > 0){
        // cout << st.top() << endl;
        temp.push(st.top());
        st.pop(); 
    }
    while(temp.size() > 0){
        temp2.push(temp.top());
        temp.pop();
    }
    while (temp2.size()>0){ 
        // cout << temp.top() <<endl;
        st.push(temp2.top());
        temp2.pop();
    }
    print(st);
}