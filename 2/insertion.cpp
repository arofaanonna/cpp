#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"enter array size :";
    cin>>n;
    int arr[100];
    cout<<"enter array elements :"; 
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"array :";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    //insertion sort 
    for(int i = 1; i<n; i++)
    {
        int curr = arr[i];
        int prev = i-1;
        while(prev >=0 && arr[prev]>curr)
        {
            arr[prev+1]=arr[prev];
            prev--;

        }
        arr[prev+1]=curr;
    }
   cout<<endl;
    cout<<"after selection sort :";
    for(int i =0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    } 
}