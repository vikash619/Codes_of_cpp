// method 1 : by counting all 0's 
// time complexity : O(2N)

#include <iostream>
using namespace std;

void Sort(int arr[], int len)
{
    int count = 0;                    //counting all 0's
    for(int i = 0; i < len; i++)
    {
        if(arr[i] == 0)
        {
            count++;
        }
    }
    
    for(int i = 0; i < len; i++)
    {
        if(i < count)                 // filling 0's till less than count
        {
            arr[i] = 0;
        }
        else
        {
            arr[i] = 1;               // filling 1's till less than length
        }
    }
}

void printArray(int arr[], int len)
{
    for(int i = 0; i < len; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{  
    int arr[] = {0,1,1,0,1,0,0,1,0,1,0,1,1,1,0};
    int len = sizeof(arr)/sizeof(arr[0]);
    
    Sort(arr,len);
    printArray(arr,len);
    
    return 0;
}


// second and efficient method : 2 pointer approach
// time complexity : O(N)

#include <iostream>
using namespace std;

void Sort(int arr[], int len)
{   int i = 0;                    // start
    int j = len -1;               // end
    
    while(i < j)                  //till "i"  is less than "j"
    {
        int left = arr[i];        // accessing first element
        int right = arr[j];        // accessing last element
        
        if(left == 0)
        {
            i++;                  // increasing "i" when found 0's
        }
        else if(right == 1)
        {
            j--;                  // decreasing "j" when found 1's
        }
        else if(left == 1 && right == 0)    // swapping when found 1's in "i" position and 0's in "j" position
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
}

void printArray(int arr[], int len)
{
    for(int i = 0; i < len; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{  
    int arr[] = {0,1,1,0,1,0,0,1,0,1,0,1,1,1,0};
    int len = sizeof(arr)/sizeof(arr[0]);
    
    Sort(arr,len);
    printArray(arr,len);
    
    return 0;
}
