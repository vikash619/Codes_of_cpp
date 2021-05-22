#include <iostream>
#include <stdio.h>

#include <string.h>

using namespace std;

int main()
{   
   char str1[7] = "vikash";
   char str2[17] = "mishra";
   int count = printf("%s", str1);              //print and puts function do same work 
   int count2 = puts(str1);                     //but puts finction prints next statement in next line by default
   
                                                //One more difference--> prinf return count of character it printed
                                                //Excluding '\0' but puts function include it as well
   puts(str2);
   cout<<count<<endl<<count2;
    return 0;
}
