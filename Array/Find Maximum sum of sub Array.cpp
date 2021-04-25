#include <iostream>
using namespace std;

int findMax(int arr[], int leng,int window)
{
    int max = 0;
    int sum = 0;
    int start = 0;
    
    //checking arry is empty, window larger/smaller than lenth of array
    if(leng==0 || window > leng || window <= 0)
    {
        return -1;
    }
    
    for(int i = 0; i < window; i++)
    {
        sum = sum + arr[i];         // maximum of first window
    }
    
    max = sum;
    
    for(int j = window; j < leng; j++)
    {
        sum = sum + arr[j] - arr[start++];  // adding next element in previous windows sum than minus than comparie & updating
        
        if(sum > max)
        {
            max = sum;      // changing max if next max is greater than previous one
        }
    }
    
    
    return max;     // returning max of window
}

int main()
{
   int arr [] = { 3, 5, 2, 4, 9, 3, 1, 7, 3, 11, 12, 3 };
   int leng = sizeof(arr)/sizeof(arr[0]);
   int num,window;
   cout<<"Enter window : "<<endl;
   cin>>window;
   
   
   int large = findMax(arr,leng,window);
   cout<<"maximun : "<<large;
    return 0;
}
