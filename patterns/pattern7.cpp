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
            cout<<temp;
            temp = temp + 2;
        }
        cout<<endl;
        
    }
    
    return 0;
}

//1 3 5 7 9
//11 13 15 17 19
//21 23 25 27 29
//31 33 35 37 39
//41 43 45 47 49
