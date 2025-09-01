#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack <int> st;
    // cout << st.size() << endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    // cout << st.size() << endl;
    // printing in reverse order --> emptying the stack
    // while(st.top() > 0){
    //     cout << st.top() << endl;
    //     st.pop(); 
    // }

    //we will use extra stack
    stack <int> temp;
    while(st.size() > 0){
        // cout << st.top() << endl;
        int x = st.top();
        st.pop(); 
        temp.push(x);
    }
    // putting stack back to st
    // printing in regular order
    while (temp.size()>0){ 
        cout << temp.top() <<endl;
        int x = temp.top();
        temp.pop();
        st.push(x);
    }
    // cout << endl << st.top();
}