#include <iostream>
#include <vector>
using namespace std;

void printarr(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    cout<<arr[i];
  }
}

void pairsum(int a[],int n,int s)
{
  vector< vector <int>>ans;
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      vector<int>temp;
      if(a[i]+a[j]==s)
      {
        temp.push_back(min(a[i],a[j]));
        temp.push_back(max(a[i],a[j]));
        ans.push_back(temp);
      }
    }
    
  }

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i][0] << " " << ans[i][1] << endl;
    }

}

int main() 
{
    int arr1[5]={1,2,6,4,8},n=5,s=10;
    pairsum(arr1,n,s);
    return 0;
}
