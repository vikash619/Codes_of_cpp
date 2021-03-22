#include <iostream>
using namespace std;

void insertioninSorted(int arr[], int size, int element,int capacity,int index)
{
    if(size>=capacity)
    {
       cout<<"Array full"<<endl;
       return;
    }
    
    for(int i = size-1; i>=index; i--)
    {
        arr[i+1] = arr[i]; 
    }
    
    arr[index] = element;
}

void deletioninSorted(int arr[], int size,int capacity,int index)
{
    if(index>size)
    {
        cout<<"Array is short or empty"<<endl;
        return;
    }
    
    for(int i = index; i <= size-index; i++)
    {
        arr[i] = arr[i+1];
    }
    
}

void traverse(int arr[], int size)
{
    for(int i = 0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {10, 13, 17, 19,21};
    
    int size =  sizeof(arr)/sizeof(arr[0]);
    int element = 11, capacity = 100, index = 1;
    
    insertioninSorted(arr,size,element,capacity,index);
    size += 1;
    traverse(arr, size);
    
    cout<<endl;
    
    index = 3;
    deletioninSorted(arr,size,capacity,index);
    size -= 1;
    traverse(arr, size);
    
    
    
    return 0;
}
