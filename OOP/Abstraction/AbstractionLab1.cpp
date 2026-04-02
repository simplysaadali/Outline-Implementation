#include <iostream>
using namespace std;

class Animal{
    public:
        virtual void speak() = 0;
};

class Dog : public Animal{
    public:
        void speak(){
            cout << "Bow" << endl;
        }
};

class Cat : public Animal{
    public:
        void speak(){
            cout << "Meow" << endl;
        }
};

int main(){
    Dog d1;
    Cat c1;
    Animal* a1;

    a1 = &c1;

    a1->speak();
    d1.speak();
    c1.speak();
}