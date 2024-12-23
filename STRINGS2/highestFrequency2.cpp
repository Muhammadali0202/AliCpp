#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    string s = "leetcode";
    vector<int> arr(26, 0);
    for(int i = 0; i<s.length(); i++){
        char ch = s[i];
        int asscii = (int)ch;
        arr[asscii - 97]++;
    }
    int max = 0;
    for(int i = 0; i<26; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    for(int i = 0; i<26; i++){
        if(arr[i] == max){
            int asscii = i + 97;
            char ch = (char)asscii;
            cout << ch << " " << max << endl;
        }
    }
    return 0;
}