#include<iostream>
using namespace std;

// Selection Sort = keeking index of minimum element in each iteration than swap with ith index

void selection_sort(int arr[], int len)
{
    for(int i = 0; i < len-1; i++)
    {
        int imin = i;
        
        for(int j = i+1; j < len; j++)
        {
            if(arr[j] < arr[imin])
            {
                imin = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[imin];
        arr[imin] = temp;
    }
}

int main()
{
    int arr[] = {2,7,4,1,5,3};
    int len = sizeof(arr)/sizeof(arr[0]);
    
    selection_sort(arr,len);
    for(int i = 0; i < len; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
