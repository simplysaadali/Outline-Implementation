#include <iostream>
using namespace std;

class Person{
public:
    string name;
    int age;

    void displayPerson(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person{
public:
    int rollno;

    void displayStudent(){
        displayPerson();
        cout << "Roll No: " << rollno << endl;
    }
};

class Exam : public Student{
public:
    int marks;

    void displayExam(){
        displayStudent();
        cout << "Marks: " << marks << endl;
    }
};

class Sports{
public:
    string game;

    void displaySports(){
        cout << "Game: " << game << endl;
    }
};

class Result : public Exam, public Sports{
public:
    void displayResult(){
        displayExam();
        displaySports();
    }
};

int main(){

    Student s1;
    s1.name = "Saad";
    s1.age = 20;
    s1.rollno = 101;

    cout << "Single Inheritance\n";
    s1.displayStudent();

    cout << endl;

    Exam e1;
    e1.name = "Saad";
    e1.age = 20;
    e1.rollno = 101;
    e1.marks = 85;

    cout << "Multilevel Inheritance\n";
    e1.displayExam();

    cout << endl;

    Result r1;
    r1.name = "Saad";
    r1.age = 20;
    r1.rollno = 101;
    r1.marks = 90;
    r1.game = "Cricket";

    cout << "Multiple Inheritance\n";
    r1.displayResult();

    return 0;
}