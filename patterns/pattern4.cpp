#include <iostream>

#include <string.h>

using namespace std;

int main()
{  
    int row;
    cin>>row;
    
    for(int i = 1; i <=row; i++)
    {
        for(int j = row; j >= 1; j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
    
    return 0;
}

//55555
//44444
//33333
//22222
//11111
