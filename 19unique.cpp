#include <iostream>
using namespace std;

int findsigleUnique(int arr[],int n)
{
  int i,ans=0;
  for(i=0;i<n;i++)
  {
    ans=ans^arr[i];
  }
  return ans;
}

int main() 
{
    int arr[5]={1,2,6,2,1},n=5;
    //reverse the array
    int r=findsigleUnique(arr,n);
    cout<<r;
    return 0;
}
