#include <iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter array size :";
  cin>>n;
  int arr[100];
  cout<<"Enter array element :";
  for(int i=0; i<n; i++)
  {
    cin>>arr[i];
  }
  cout<<"array elements :";
   for(int i=0; i<n; i++)
  {
    cout << arr[i]<<" ";
  }
  for(int i; i<n-1; i++){
  int smallestIndex = i;
  
    for(int j=i+1; j<n; j++ )
    {
       if(arr[j]<arr[smallestIndex])
       smallestIndex = jla;
    }
  }
  swap(arr[i],arr[smallestIndex]);
}