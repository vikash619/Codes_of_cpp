
#include <iostream>
#define N 100
using namespace std;


void insert(int arr[], int element_size, int index, int data)
{
    for(int i = element_size; i>= index; i--)
    {
        arr[i+1] = arr[i];
    }
    
    arr[index] = data;
}

void deletee(int arr[], int element_size, int index_delete)
{
    for(int i = index_delete; i<= element_size; i++)
    {
        arr[i] = arr[i+1];
    }
}

int main()
{
    int arr[N];
    int element_size;
    
    cout<<"How many element wanna insert ?\n";
    cin>>element_size;
    for(int i = 0; i<element_size; i++)
    {
        cin>>arr[i];
    }
    
    for(int i = 0; i<element_size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    int index;
    cout<<endl<<"In which index uh wanna insert : ";
    cin>>index;
    
    int data;
    cout<<endl<<"Enter data wanna insert :";
    cin>>data;
    
    insert(arr,element_size, index, data);
    
    cout<<endl;
    
    element_size += 1;
    
    for(int i = 0; i<element_size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    int index_delete;
    cout<<"Enter index wanna delete :";
    cin>>index_delete;
    deletee(arr, element_size, index_delete);
    
    for(int i = 0; i<element_size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
