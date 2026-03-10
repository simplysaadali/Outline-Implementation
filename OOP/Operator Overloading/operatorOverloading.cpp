#include <iostream>
#include <string>
using namespace std;

// class Student{
//     public:
//         int id;
//         string name;

//         Student operator + (Student temp){
//         Student s3;
//         s3.id = this->id + temp.id;
//         s3.name = this->name + " " + temp.name;
//         return s3;
//     }
// };

// int main(){
//     Student s1, s2, s3;

//     s1.id = 1;
//     s1.name = "Saad";

//     s2.id = 2;
//     s2.name = "Ali";

//     s3 = s1 + s2;

//     cout << s3.id << endl;
//     cout << s3.name;
// }

class Cars{
    public:
        string engine;
        int litre;
        float tyres;

        Cars operator + (Cars temp){
            Cars c3;

            c3.engine = engine +  " " +  temp.engine;
            c3.litre = litre + temp.litre;
            c3.tyres = tyres + temp.tyres;

            return c3;
        }

};

int main(){

    Cars c1, c2, c3;

    c1.engine = "V12";
    c1.litre = 2000;
    c1.tyres = 16;

    c2.engine = "V8";
    c2.litre = 2100;
    c2.tyres = 22;

    c3 = c1 + c2;

    cout << "Final answer of engine is:" << c3.engine << endl;
    cout << "Final answer of litre is:" << c3.litre << endl;
    cout << "Final answer of tyres is:" << c3.tyres << endl;

    return 0;
}