#include <iostream>

#include <string.h>

using namespace std;

int main()
{  
    int row;
    cin>>row;
   
    
    for(int i = 1; i <=row; i++)
    {
        for(int j = 1; j <= row; j++)
        {
            cout<<i*j;
            
        }
        cout<<endl;
        
    }
    
    return 0;
}

//1 2 3 4 5
//2 4 6 8 10
//3 6 9 12 15
//4 8 12 16 20
//5 10 15 20 25
