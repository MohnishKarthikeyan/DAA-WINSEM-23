#include <iostream>
using namespace std;

//Way 1 to find the element:
void linear_search(int arr[], int k, int n)
{
  for(int i=0;i<n;i++)
  {
    if(arr[i]==k)
    {
      cout<<"The position of the element is : "<<(i+1)<<endl;
    }
  }
}

//Way 2 to find the element:
void bin_search(int arr[],int k,int n)
{
  int i = 0;
  int j = n;
  while(i<j)
  {
    int q=(i+j)/2;
    if(arr[q]==k)
    {
      cout<<"The position of the element is : "<<(q+1);
      break;
    }
    else if(arr[q]>k)
    {
      i=0;
      j=q;
    }
    else
    {
      i=q;
      j=n;
    }
  }
}

int main()
{
  int n,k;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cin>>k;
  linear_search(arr,k,n);
  bin_search(arr,k,n);
}