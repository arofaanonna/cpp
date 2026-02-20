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
    cout<<"------bubble sort-----"<<endl;
    for(int i=0; i<n; i++)//outer loop for 
    {
        for(int j=0; j<n-i-1; j++)//iner loop 
        {
            if(arr[j]>arr[j+1])//if left element big and 
                            //right element small then 
                            //large shift at right
            {
                int temp =arr[j];//temp for shift element 
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"after sorting the array elements :";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;

}