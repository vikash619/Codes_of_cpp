#include <iostream>
#include <string.h>

using namespace std;

int main()
{   
    char str1[7];
    char str2[7];
    
    cin>>str1;
    
    strcpy(str2,str1);              // "strcpy"--> destination , source and its copies string including '\0'
                                    // "strncpy" --> destination , source, size and function dont include '\0'
    cout<<str1<<endl<<str2<<endl;
    return 0;
}
