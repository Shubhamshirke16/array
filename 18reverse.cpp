reverse the array for even size and odd size

#include <iostream>
using namespace std;

void printarr(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    cout<<arr[i];
  }
}
void revArray(int arr[],int n)
{
  int i=0;
  while(i<n-i)
  {
    swap(arr[i],arr[n-i-1]);
    i++;
  }
}

int main() 
{
    int arr[5]={1,2,6,4,8},n=5;
    //reverse the array
    revArray(arr,n);
    printarr(arr,n);
    return 0;
}
