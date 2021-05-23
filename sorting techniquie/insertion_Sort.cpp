#include <iostream>
using namespace std;


// Here we pick one element from unsorted array and insert it to that position from where array should remain sorted

void insertionSort(int arr[], int len)
{
    for(int i = 1; i < len; i++)            //loop will run till last element
    {
        int element = arr[i];               //store "i" element so we can further set it to its right place
        int j = i-1;                        // this will compare "i"  to "i-1" element

        while(j >= 0 && arr[j] > element)   //this goes till element untill it finds smallest element than "i"
        {
            arr[j+1] = arr[j];              //we simple shifing one position every element which is greater than our "i"
            j--;
        }
        
        arr[j+1] = element;                 //finally our "i" will be inserted to its position
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
    int arr[] = {10,17,19,13,7,1,16,23,12,11};
    int len = sizeof(arr)/sizeof(arr[0]);
    
    insertionSort(arr,len);
    printArray(arr,len);
    
    return 0;
}
