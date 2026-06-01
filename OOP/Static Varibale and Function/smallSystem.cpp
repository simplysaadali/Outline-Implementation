#include <iostream>
using namespace std;

class Payment {
protected:
    double amount;
    int trans_ID;

    static int counter;

public:
    Payment(double amt) {
        if (amt <= 0) {
            cout << "Invalid amount...";
            amount = 0;
        } else {
            amount = amt;
        }

        trans_ID = ++counter; // unique ID for all objects and even for many trans object
    }

    virtual void processing_payment() = 0;
    virtual void generating_receipt() = 0;

    virtual ~Payment(){}
};

int Payment::counter = 0;

class EasyPaisa : public Payment {
public:
    EasyPaisa(double amt) : Payment(amt) {}

    void processing_payment() {
        cout << "Processing EasyPaisa payment of: " << amount << endl;
    }

    void generating_receipt() {
        cout << "EasyPaisa transaction ID receipt: " << trans_ID << endl;
    }

    ~EasyPaisa(){}
};

class JazzCash : public Payment {
public:
    JazzCash(double amt) : Payment(amt) {}

    void processing_payment() {
        cout << "Processing JazzCash payment of: " << amount << endl;
    }

    void generating_receipt() {
        cout << "JazzCash transaction ID receipt: " << trans_ID << endl;
    }

    ~JazzCash(){}
};

class NayaPay : public Payment {
public:
    NayaPay(double amt) : Payment(amt) {}

    void processing_payment(){
        cout << "Processing NayaPay payment of: " << amount << endl;
    }

    void generating_receipt() {
        cout << "NayaPay transaction ID receipt: " << trans_ID << endl;
    }

    ~NayaPay(){}
};

int main() {
    EasyPaisa ep(1111);
    JazzCash jz(2222);
    NayaPay np(3333);

    Payment* p1;
    Payment* p2;
    Payment* p3;

    p1 = &ep;
    p2 = &jz;
    p3 = &np;

    p1->processing_payment();
    p2->processing_payment();
    p3->processing_payment();

    p1->generating_receipt();
    p2->generating_receipt();
    p3->generating_receipt();

    return 0;
}