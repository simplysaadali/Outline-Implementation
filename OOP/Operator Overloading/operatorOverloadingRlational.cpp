#include <iostream>
using namespace std;

class Logical{
    public:
        int test;
        Logical(int t){
            test = t;
        }

        bool operator == (const Logical &l){
            return this->test == l.test;
        }
        bool operator != (const Logical &l){
            return this->test != l.test;
        }
        bool operator < (const Logical &l){
            return this->test < l.test;
        }
        bool operator > (const Logical &l){
            return this->test > l.test;
        }
        bool operator <= (const Logical &l){
            return this->test <= l.test;
        }
        bool operator >= (const Logical &l){
            return this->test >= l.test;
        }

};

int main(){
    Logical b1(20), b2(30);

    bool equality = b1 == b2;
    cout << equality << endl;

    bool inequality = b1 != b2;
    cout << inequality << endl;

    bool lessThan = b1 < b2;
    cout << lessThan << endl;

    bool greaterThan = b1 > b2;
    cout << greaterThan << endl;

    bool lessThanEqual = b1 <= b2;
    cout << lessThanEqual << endl;  

    bool greaterThanEqual = b1 >= b2;
    cout << greaterThanEqual << endl;

    return 0;
}