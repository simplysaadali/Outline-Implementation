#include <iostream>
#include <string>
using namespace std;

// inline int sum(int a, int b){
//     return a + b;
// }

// int main(){
//     int a, b;

//     cout << "Please enter the values that u want to make sum: ";
//     cin >> a >> b;

//     cout << "Sum: " << sum(a, b);
// }

class Student{
    public:
        int id;
        string name;
        int age;

    void show(){
        cout << "Id: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main(){
    Student c1;

    c1.id = 052;
    c1.name = "Aman";
    c1.age = 26;

    c1.show();
}

// evey function that is made inside a class is a inline function