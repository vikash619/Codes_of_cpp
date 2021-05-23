#include<iostream>
using namespace std;

// Selection Sort with while loop

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


//with For Loop

/*
void bubbleSort(int arr[], int len)
{
    for(int i = 0; i < len; i++)
    {
        for(int j = 0; j < len-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

*/

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
