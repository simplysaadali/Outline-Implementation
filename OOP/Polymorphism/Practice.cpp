#include <iostream>
using namespace std;

class Sound {
public:
    virtual void speak() {
        cout << "Generic speaking" << endl;
    }
};

class Human : public Sound {
public:
    void speak() {
        cout << "Human is speaking" << endl;
    }
};

class Animal : public Sound {
public:
    void speak() {
        cout << "Animal is speaking" << endl;
    }
};

int main() {
    Sound* s1;
    Human h;
    Animal a;

    s1 = &h;
    s1->speak();  // Human version

    s1 = &a;
    s1->speak();  // Animal version

    return 0;
}