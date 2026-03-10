#include <iostream>
#include <string>
using namespace std;

class Student {
    private:
        string name;
        int salary;

    public:
        int age;

        Student(int a){
            age = a;
        }

        void setNameAndSalary(string n, int s){
            name = n;
            salary = s;
        }
        void GetNameAndSalary(){
            cout << "Name: " << name << endl;
            cout << "Salary: " << salary << endl;
        }
};

int main(){
    int p;
    cout << "Enter age: ";
    cin >> p;

    cout << "Size of the Class is: " << sizeof(Student) << endl;
    
    Student s1(p);
    cout << "Age: " << s1.age << endl;

    s1.setNameAndSalary("Saad", 50000);
    s1.GetNameAndSalary();
    
    return 0;
}