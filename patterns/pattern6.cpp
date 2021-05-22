#include <iostream>

#include <string.h>

using namespace std;

int main()
{  
    int row;
    cin>>row;
    int temp = 1;
    
    for(int i = 1; i <=row; i++)
    {
        for(int j = 1; j <= row; j++)
        {
            cout<<temp++;
        }
        cout<<endl;
        
    }
    
    return 0;
}

//12345
//678910
//11 12 13 14 15
//16 17 18 19 20
//21 22 23 24 25
