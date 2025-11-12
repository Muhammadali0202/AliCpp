#include <iostream>
#include <queue>
using namespace std;
void display(queue<int> &q){
    int n = q.size();
    for(int i = 1; i<=n; i++){
        int x= q.front();
        cout << x << " ";
        q.pop();
        q.push(x);

    }
    cout << endl;
}
void displayRev(queue<int> &q){
    int n = q.size();
    for(int i = 1; i<= n; i++){
        int x = q.back();
        cout << x << " ";
        q.pop();
        q.
    }
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    // cout << q.front();
    display(q);
    displayRev(q);
}