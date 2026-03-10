#include <iostream>
using namespace std;

class Teacher{

public:
    Teacher(){
        dept = "Computer Science";           //automatically assigns department to every objectt created of Teacher
    }           //constructor

    string dept;
    string name;
    int age;

private:
    int salary;
};

int main(){
    Teacher t1;  //construcotr is called automatically when an object is created

    t1.name = "Ali";
    t1.age = 30;

    cout << t1.name << endl;
    cout << t1.age << endl;
    cout<<t1.dept << endl;  //prints Computer Science because of constructor
}