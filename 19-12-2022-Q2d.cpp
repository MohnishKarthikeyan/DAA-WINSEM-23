#include <iostream>
using namespace std;
int main()
{
  int n,i,j,key,s;
  cin>>n;
  int arr[n];
  for(i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  for(j=1;j<n;j++)
  {
    key = arr[j];
    i=j-1;
    while(i>=0 && key<=arr[i])
    {
      arr[i+1]=arr[i];
      i--;
    }
    arr[i+1]=key;
  }
  for(int i=0;i<n;i++)
  {
    if(arr[i]>=0)
    {
      s=i;
      break;
    }
  }
  for(j=1;j<s;j++)
  {
    key = arr[j];
    i=j-1;
    while(i>=0 && key>=arr[i])
    {
      arr[i+1]=arr[i];
      i--;
    }
    arr[i+1]=key;
  }
  for(i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
}