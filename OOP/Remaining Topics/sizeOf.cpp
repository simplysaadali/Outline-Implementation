#include <iostream>
#include <string>
using namespace std;

class Employee{
    private:
        string name;

    public:
        int age;
        Employee(){
            age = 2000;
        }
        void setName(string n){
            this->name = n;
        }
        string getName(){
            return name;
        }
};

int main(){
    Employee e1;
    e1.setName("Saad Ali");
    cout << e1.getName() << endl;

    cout << "Size of the Class is: " << sizeof(Employee) << endl;
    cout << "Size of the Object is: " << sizeof(e1) << endl;
}