#include <iostream>
using namespace std;

// class Student{
//     public:
//         string name;
//         int id;

//         Student operator +(Student n){
//             Student s3;
//             s3.id = this->id + n.id;
//             s3.name = this->name + " " + n.name;

//             return s3;
//         }
// };

// int main(){
//     Student s1, s2, s3;

//     s1.id = 10;
//     s1.name = "Saad";

//     s1.id = 20;
//     s2.name = "Ali";

//     s3 = s1 + s2;

//     cout << s3.id << endl;
//     cout << s3.name << endl;
// }

class Practice{
    public:

    // addditon of two numbers
        int a, b;
        Practice(int x, int y): a(x), b(y) {}

        Practice operator + (Practice p){
            Practice p3(0, 0);
            p3.a = this->a + p.a;
            p3.b = this->b + p.b;

            return p3;
        }

        Practice(const Practice &v): a(v.a), b(v.b){}

        Practice operator - (Practice p){
            Practice p6(0, 0);
            p6.a = this->a - p.a;
            p6.b = this->b - p.b;

            return p6;
        }
};

// multiplication
class Mult{
    public:
        int a, b;
        Mult(int x, int y){
            a = x;
            b = y;
        }
        
        Mult operator * (Mult m){
            Mult m3(0,0);
            m3.a = this->a * m.a;
            m3.b = this->b * m.b;

            return m3;
        }
};

class Divd{
    public:
        int a, b;
        Divd(int x, int y){
            a = x;
            b = y;
        }
        
        Divd operator / (Divd d){
            Divd d3(0,0);
            d3.a = this->a / d.a;
            d3.b = this->b / d.b;

            return d3;
        }
};

int main(){
    // addition
    Practice p1(5, 10);
    Practice p2(15, 20);
    Practice p7(20, 40);

    Practice p3 = p1 + p2 + p7;
    cout << "Sum of a: " << p3.a << endl;
    cout << "Sum of b: " << p3.b << endl;

    // Subtraction
    Practice p4(5, 10);
    Practice p5(15, 20);

    Practice p6 = p5 - p4;
    cout << "Difference of a: " << p6.a << endl;
    cout << "Difference of b: " << p6.b << endl;

    // muliplication
    Mult m1(10, 20);
    Mult m2(30, 40);

    Mult m3 = m1 * m2;

    cout << "After Multiplication 'a': " << m3.a << endl;
    cout << "After Multiplication 'b': " << m3.b << endl;

    // division
    Divd d1(70, 80);
    Divd d2(30, 40);

    Divd d3 = d1 / d2;

    cout << "After Division 'a': " << d3.a << endl;
    cout << "After Division 'b': " << d3.b << endl;

    return 0;
}