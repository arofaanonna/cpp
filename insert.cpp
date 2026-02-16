#include<iostream>
using namespace std;
int main(){
    cout<<"-----array size and element---- \n";
    int n;
    cout<<"Enter array size :";
    cin>>n;
    int arr[100];
    //int arr[n] is not standard 
    //sometimes it shows error in 
    //vs code and other standard compiler
    //to avoid error we can use 
    //pointer,vector ,fixed size
    cout<<"Enter array elements :";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"array elements :";
    for(int i=0; i<n; i++)
    {
        cout<< arr[i]<<" ";
    }
    cout<<"\n\n";
}