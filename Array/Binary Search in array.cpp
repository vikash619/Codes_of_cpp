#include <iostream>

using namespace std;

int binarySearch(int arr[], int size, int number)
{
int left = 0;
int right = size-1;
int mid= (left + right) /2 ;

while(left < right)
{
if(arr[mid] == number)
{
return mid;
}

else if(arr[mid] > number)
{
right= mid - 1;
}
else
{
left = mid+ 1;
}
mid= (left + right) /2 ;
}

return -1;

}

int main()
{
int arr[] = {1,2,3,4,5,6,7,8,9,10,11};
int size = 11;
int number = 7;
int index = binarySearch(arr,size,number);

if(index == -1)
{
cout<<"Element not found";
}
else
{

cout<<"Element found at index : "<<index<<endl;
}

return 0;
}
