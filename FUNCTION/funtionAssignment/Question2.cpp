//Q write a function that takes the radius of a circle as an argument and returns its area.
#include <iostream>
using namespace std;
float area(float r){
    float area;
    area = 3.14*r*r;
    return area;
}
int main(){
    float r;
    cout << "Enter radius of Circle: ";
    cin >> r;
    cout << "Area of a circle is: " << area(r);
    
}