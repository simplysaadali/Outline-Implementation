// aggregation, compositions, and relation...
#include <iostream>
using namespace std;

// composition...
class Menu{
    public:
        Menu(){
            cout << "Menu Created" << endl;
        }

        ~Menu(){

        }
};

class Cafe{
    public:
        Cafe(){
            cout << "Cafe Created" << endl;
        }
};

// -----------------------------------------------------------------------
// Association..
class Student{
    public:
        Student(){
            cout << "Created" << endl;
        }
};

class Teacher{
    public:
        Teacher(){
            cout << "Teacher costrucotr created";
        }
};

int main(){
    Student s1;
    // Teacher t1;
    // after commenting, there still exits student, means totally independant...
}
