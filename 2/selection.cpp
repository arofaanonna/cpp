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
    for(int i=0; i<n-1; i++)
    {
        int smIndex = i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]>arr[smIndex])
            {
                smIndex = j;
            }
        
        swap(arr[j], arr[smIndex]);
        }
    }
    cout<<endl;
    cout<<"after selection sort :";
    for(int i =0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}