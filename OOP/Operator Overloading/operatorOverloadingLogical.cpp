#include <iostream>
#include <string>
using namespace std;

// AND Operator overloading
class Try{
    public:
        int id;
        int age;

        Try(int ID = 0, int AGE = 0){
            id = ID;
            age = AGE;
        }

        Try operator && (Try t){
            Try t3;
            t3.id = this->id && t.id;
            t3.age = this->age && t.age;
            return t3;
        }
};

int main(){
    Try t1(10, 20);
    Try t2(30, 40);
    Try t3 = t1 && t2;

    cout << t3.id << endl;
    cout << t3.age << endl;
}