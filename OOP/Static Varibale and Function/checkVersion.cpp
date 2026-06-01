#include <iostream>
using namespace std;

int main() {

#if __cplusplus >= 202002L
    cout << "C++20 or newer";
#elif __cplusplus >= 201703L
    cout << "C++17";
#elif __cplusplus >= 201402L
    cout << "C++14";
#elif __cplusplus >= 201103L
    cout << "C++11";
#else
    cout << "C++98 or older";
#endif

    return 0;
}