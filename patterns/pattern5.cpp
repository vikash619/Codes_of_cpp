#include <iostream>

#include <string.h>

using namespace std;

int main()
{  
    int row;
    cin>>row;
    int temp = row;
    
    for(int i = 1; i <=row; i++)
    {
        for(int j = 1; j <= row; j++)
        {
            cout<<temp;
        }
        cout<<endl;
        --temp;
    }
    
    return 0;
}

//55555
//44444
//33333
//22222
//11111
