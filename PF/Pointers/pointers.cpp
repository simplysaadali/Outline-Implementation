#include <iostream>
using namespace std;

int* sum(int &a, int &b){
    int add = a + b;
    cout << "Sum is: " << &add << endl;
    return &add;
}

int main(){
    // int a = 20;
    // int* ptr = &a;

    // int list[5] = {1, 2, 3, 4, 5};
    // int* pList = list;

    // cout << "Value pointed to by ptr: " << pList[4] << endl;

    // cout << "Value of a: " << a << endl;
    // cout << "Address of a: " << &a << endl;

    int x = 10, y = 15;
    int* result = sum(x, y);

    
}