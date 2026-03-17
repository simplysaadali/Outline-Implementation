#include <iostream>
using namespace std;

class Short{
public:
    virtual void show(){
        cout << "Short height..." << endl;
    }
};

class Saddique: public Short{
    public:
    void show(){
        cout << "Saddique Too Short" << endl;
        }
    };

class Aman: public Short{
    public:
    void show(){
        cout << "Short but not too much like saddique" << endl;
        }
    };

int main(){
    Short* s1;
    Saddique s2;
    Aman s3;

    // s1->show();

    s1 = &s2;
    s1->show();

    s1 = &s3;
    s1->show();
}