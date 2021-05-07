#include<iostream>
using namespace std;

// Selection Sort

void bubble_sort(int arr[], int len)
{
    int counter = 1;
    while(counter < len)
    {
        for(int i = 0; i < len-counter; i++)
        {
            if(arr[i] > arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
    }
}

int main()
{
    int arr[] = {2,7,4,1,5,3};
    int len = sizeof(arr)/sizeof(arr[0]);
    
    bubble_sort(arr,len);
    for(int i = 0; i < len; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
