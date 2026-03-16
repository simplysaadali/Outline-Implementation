#include <iostream>
#include<string>
using namespace std;

class Student{
    private:
        string Address = "Not given";
    public:
        const int age;
        string name = "None";
        float height = 0;
    Student(int i=1): age(i){ //part of initializing list, no error and can be given the value once
        // age = i; error due to both constants
    }

    void setNameAndHeight(string n , double h ){
        name = n;
        height = h;
    }

    void showInfo() const{          //can't modify the data members
        cout << "Age: " << age << endl;
        cout << "Name: " << name << endl;
        cout << "height: " << height << endl;
    }


};

int main(){
    Student s1(100);
    s1.setNameAndHeight("Saad", 5.11);
    s1.showInfo();
    // s1.age = 10; can't be done due to cosnt


}