#include <iostream>
using namespace std;

// Single level inheritence
// class Person{
//     public:
//         string name;
//         int age;

//         void displayPerson(){
//             cout << "Name: " << name << endl;
//             cout << "Age: " << age << endl;
//         }
// };


// class Student: public Person{
//     public:
//         int rollno;
//         void displayStudent(){
//             cout << "Roll No: " << rollno << endl;
//         }
// };

// int main(){
//     Student s1;
//     s1.name = "Saad";
//     s1.age = 20;
//     s1.rollno = 101;

//     s1.displayPerson();
//     s1.displayStudent();
// }



// multi level inheritence
// class Person{
//     public:
//         string name;
//         int age;

//         void displayPerson(){
//             cout << "Name: " << name << endl;
//             cout << "Age: " << age << endl;
//         }
// };

// class Student: public Person{
//     public:
//         int rollno;
//         void displayStudent(){
//             displayPerson();
//             cout << "Roll No: " << rollno << endl;
//         }
// };

// class Exam: public Student{
//     public:
//         int  marks;

//         void displayExam(){
//             displayStudent();
//             cout << "Marks: " << marks << endl;
//         }
// };

// int main(){
//     Exam e1;
//     e1.name = "Saad";
//     e1.age = 20;
//     e1.rollno = 101;
//     e1.marks = 85;

//     e1.displayExam();

//     return 0;
// }


// multiple inheritence

class Student{
    public:

        int id;

        void displayStudent(){
            cout << "ID: " << id << endl;
        }
};

class Person{
    public:
        string name;

        void displayPeron(){
            cout << "Name: " << name << endl;
        }
};

class Exam: public Student, public Person{
    public:
        int marks;

        void displayExam(){
            displayStudent();
            displayPeron();
            cout << "Marks: " << marks << endl;
        }
};

int main(){
    Exam e1;
    e1.id = 101;
    e1.name = "Saad";
    e1.marks = 85;

    e1.displayExam();
}