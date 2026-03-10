#include <iostream>
using namespace std;

class Person{
    
public:
    Person(){}

    int age;
    string name;
};

class Student: public Person{
public:

    int roll_no;

    void showInfo(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << roll_no << endl;
    }
};

int main(){
    Student s1;
    s1.name = "Saad";
    s1.age = 20;
    s1.roll_no = 2501;

    s1.showInfo();

    return 0;
}