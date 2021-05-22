#include <iostream>

#include <string.h>

using namespace std;

int main()
{  
    int row;
    cin>>row;
    
    for(int i = 1; i <=row; i++)
    {
        for(int j = 1; j <=row; j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
    
    return 0;
}

//11111
//22222
//33333
//44444
//55555
