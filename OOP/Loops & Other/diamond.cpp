/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main(){
    int stars = 1;
    
    for(int i = 0; i <= 5; i++){
        for(int j = i; j < 5; j++){
            cout << " ";
        }
        
        for(int k = 1; k <= i; k++){
            cout << "* ";
        }
        cout << endl;
    }
    
    for(int i = 1; i<=4; i++){
        for(int j=1; j<=i; j++){
            cout << " ";
        }
        
        for(int k = 4; k>=i; k--){
            cout << "* ";
        }
        cout << endl;
    }
}