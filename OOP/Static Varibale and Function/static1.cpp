#include <iostream>
using namespace std;

class Student{
    public:
        int a;
        inline static string cr = "Husnain";
};



int main(){
    Student s1;
    s1.a = 10;

    cout << s1.a << endl;



    
}