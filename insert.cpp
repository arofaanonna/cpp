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
    cout<<"-------Insert element-----------"<<endl;
    int target3, index3;
    cout<<"enter the element you want to insert :";
    cin>>target3;//new element
    cout<<"enter the index no you want to insert :";
    cin>>index3;//position;
    if(index3<0 || index3>n)//small than 0, large than array range
    {
        cout<<"Invalid Index!\n";
    }
    else
    {
        //right shift to make space 
        for(int i=n; i>index3; i--)
        {
            arr[i]=arr[i-1];
        }
        arr[index3]=target3;//insert element at desired index
        n++;//increase size
        cout<<"after inserting the array element :";
        for(int i=0; i<n; i++)
        {
            cout<<arr[i]<<" ";
        }
    }
}