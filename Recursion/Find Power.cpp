// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int power(int a, int b)
{ 
    if(b == 0)        // b == 1 
    {
        return 1;     // return a
    }
    
    int subprob = power(a,b-1);
    return a * subprob;
}

int main() {
    // Write C++ code here

    int a = 10;
    int b = 2;
    
    int pow = power(a,b);
    cout <<pow;

    return 0;
}
