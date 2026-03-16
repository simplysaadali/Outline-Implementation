#include <iostream>
using namespace std;

int main(){
    struct student{
        int id;
        string name;
        float height;
        void hello (){
            cout << "Hello World!" << endl;
        }
    };
    student s1;
    cout << "Please enter the id, name height: ";
    cin >> s1.id;
    cin >> s1.name;
    cin >> s1.height;
    s1.hello();
}