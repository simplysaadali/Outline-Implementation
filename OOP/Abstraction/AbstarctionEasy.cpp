#include <iostream>
using namespace std;

class Student {
public:
    void showName() {      // WHAT user can do
        printName();       // HOW is hidden
    }

private:
    void printName() {     // hidden implementation
        cout << "Saad Tariq";
    }
};

int main() {
    Student s;
    s.showName();          // user doesn't know printName()
}
