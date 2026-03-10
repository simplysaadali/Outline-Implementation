#include <iostream>
using namespace std;

// ABSTRACT CLASS
class Student {
public:
    string name = "Saad";

    // abstract function
    virtual void Fname() = 0;
};

// DERIVED CLASS
class StudentDetails : public Student {
public:
    void Fname() {
        cout << "Tariq";
    }
};

int main() {
    StudentDetails s;   // normal object, no pointer

    cout << " " << s.name;
    s.Fname();          // calling abstract behavior

}
