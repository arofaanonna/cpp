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

    cout<<"----search element-----"<<endl;
    int target, mark = 0, index;
    //target=the number what user find
    //mark=0, means element not found
    //index=element's index
    cout<<"Enter the element you want to find :";
    cin>>target;
    for(int i=0; i<n; i++)//loop for checking array 
    {
        if(arr[i]==target)
        {
           index = i;
           mark =1;
           break; 
        }
    }
    if(mark==1)
    cout<< target<<" found at index no :"<<index<<endl;
    else
    cout<<target<<"not found in array!"<<endl;
    cout<<"\n\n";
}