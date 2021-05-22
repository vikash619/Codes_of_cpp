#include <iostream>

#include <string.h>

using namespace std;

int main()
{  
    int row;
    cin>>row;
    int temp = 2;
    
    for(int i = 1; i <=row; i++)
    {
        for(int j = 1; j <= row; j++)
        {
            cout<<temp;
            temp = temp + 2;
        }
        cout<<endl;
        
    }
    
    return 0;
}

//2 4 6 8 10
//12 14 16 18 20
//22 24 26 28 30
//32 34 36 38 40
//42 44 46 48 50
