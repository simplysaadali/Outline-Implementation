#include <iostream>
using namespace std;

// class Student{
//     private:
//             string name;
//             int age;

//     public:

//     void setAge(int a){
//         this->age = a;
//     }

//     void showAge(){
//         cout << "Age: " << age << endl;
//     }

//     void setInfo(string n){
//         name = n;
//     }

//     string showInfo(){
//         return name;
//     }
// };

// int main(){
//     Student s1;

//     s1.setInfo("Saad");
//     string finally = s1.showInfo();
//     cout << "Name: " << finally << endl;

//     s1.setAge(25);
//     s1.showAge();
// }

// class Teacher{
//     private:
//         int id;
//         string name;
//         int salary;
//     public:
//         Teacher(int i=0, string s = "", int j = 0){
//             this->id = i;
//             this->name = s;
//             this->salary = j;
//         }

//         void showData(){
//             cout << "ID: " << id << endl;
//             cout << "Name: " << name << endl;
//             cout << "Salary: " << salary << endl;
//         }
// };

// int main(){
//     Teacher t1(1, "Saad");
//     t1.showData();
// }

// class Student{
//     public:
//         int id = 0;

//         Student()
        
//         {
//             // this->id = i;
            
//         }

// };

// int main(){
//     Student s1;
//     cout << "ID: " << s1.id << endl;
// }



// class Student{
//     public:
//         int id;

//         Student operator + (const Student& s){
//             Student test;
//             test.id = this->id + s.id;
//             return test;
//         }
// };

// int main(){
//     Student s1, s2, s3;
//     s1.id = 101;
//     s2.id = 102;

//     s3 = s1 + s2;

//     cout << "ID: " << s3.id << endl;

//     return 0;
// }

// class Complex{
//     public:
//         int real;
//         int imaginary;

//     Complex(int i = 0, int j = 0){
//         this->real = i;
//         this->imaginary = j;
//     }

//     Complex operator + (Complex c){
//         Complex test;
//         test.real = this->real + c.real;
//         test.imaginary = this->imaginary + c.imaginary;
//         return test;
//     }
// };

// int main(){
//     Complex c1(10, 20), c2(30, 40), c3;

//     c3 = c1 + c2;

//     cout << c3.real << " + " << c3.imaginary << "i" << endl;

//     return 0;
// }


class Student{
    public:
        int age;
        string name;
    
    Student operator + (const Student& a){
        Student temp;
        temp.age = this->age + a.age;
        temp.name = this->name + " " + a.name;
        return temp;
    }

    friend ostream& operator << (ostream& a, Student s){
        a << s.age << " " << s.name;
        return a;
    }

    
};

int main(){
    Student s1, s2, s3;
    s1.age = 20;
    s2.age = 30;

    s1.name = "Saad";
    s2.name = "Ali";


    s3 = s1+s2;

    cout << s3;
}