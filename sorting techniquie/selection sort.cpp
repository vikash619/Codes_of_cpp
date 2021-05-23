#include<iostream>
using namespace std;

// Selection Sort = seeking index of minimum element in each iteration than swap with ith index
// time compexity = O(n2)
// no. of comparision less than Bubble and Insertion Sort

//first method by pta nahi 

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


// second method by saurabh sukla sir

#include<iostream>
using namespace std;

int min(int arr[], int size, int k)
{
    int min = arr[k];
    int loc = k;
    
    for(int j = k+1; j < size; j++)
    {
        if(min > arr[j])
        {
            min = arr[j];
            loc = j;
        }
    }
    
    return loc;
}


int main()
{
    int arr[] = {33,11,66,88,99,77,44,22,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    int k, loc, temp;
    
    for(k = 0; k < size-2; k++)
    {
        loc = min(arr,size,k);
        
        temp = arr[k];
        arr[k] = arr[loc];
        arr[loc] = temp;
    }
    
    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
