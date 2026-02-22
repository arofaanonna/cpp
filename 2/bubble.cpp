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
    //bubble sort 
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
               swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<endl;
    cout<<"after sort :";
    for(int i =0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}