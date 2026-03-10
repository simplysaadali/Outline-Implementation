#include <iostream>
using namespace std;

class Person{
    public:
        string name;

         void showHeight(){
            cout << "Height: " << height << endl;
        }

    private:
        int age;

    protected:
        float height;
};

class Employee1: public Person{
    public:
        int empId;

        void setHeight(float h){
            height = h;
        }
};

class Employee2: private Person{
    public:
        int empId;
    
        void setHeight(float h){
            height = h;
        }
};

class Employee3: protected Person{
    public:
        int empId;
};

int main(){
    Employee1 e1;
    e1.name = "Saad";
    e1.empId = 123;
    // e1.height = 5.9; // Inaccesible due to protected access specifier
    e1.setHeight(5.9);
    e1.showHeight();
    cout << "Employee 1: " << e1.name << endl << "ID: " << e1.empId << endl;


    Employee2 e2;
    // e2.name = "Ali"; // Inaccesible due to private access specifier...
    e2.empId = 56;
    cout << "Employee 2 ID: " << e2.empId << endl;
    e2.setHeight(6.0);
    // e2.showHeight(); //unable to access due to private inheritence...
    // all other stuff is inaccessible due to private inheritance...


    Employee3 e3;
    // only the id is accesble but other are inaccesble due to protected inheritance...
    // means those data members can be used by grand child class, but not outside the class, in main function...
    e3.empId = 78;
    // e3.name = "Ahmed"; // Inaccesible due to protected access specifier
    // same thing with employee e, no access of the name and height...
    cout << "Employee 3 ID: " << e3.empId << endl;

    return 0;
}