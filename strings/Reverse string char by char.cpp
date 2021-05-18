#include <iostream>
using namespace std;
int main(){
    // Your code here!
    char str[] = "hello world";
    
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    
    int last = count-1;
    int start = 0;
    while(start < last)
    {
        int temp = str[start];
        str[start] = str[last];
        str[last] = temp;
        ++start;
        --last;
    }
    
    
    int i = 0;
    while(str[i] != '\0')
    {
        cout<<str[i];
        i++;
    }
    
}
