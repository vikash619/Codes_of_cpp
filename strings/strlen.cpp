#include <iostream>
#include <string.h>

using namespace std;

int main()
{   
    char str1[7] = "vikash";
    char str2[20];
    
    int len = strlen(str1);             //strlen return length of string not length of Array and it does not count NULL character
    cout<<len;
    
    return 0;
}
