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
    // i<5,0,1,2,3,4
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"array elements :";
    // i<5,0,1,2,3,4
    for(int i=0; i<n; i++)
    {
        cout<< arr[i]<<" ";
    }
    cout<<"\n\n";
    cout<<"-----delete element-----"<<endl;
    int target2, mark2=0, index2;
    cout<<"Enter the number you want to delete or 100 for quite:";
    cin>>target2;
    for(int i=0; i<n; i++)
    {
        if(target2 == 100){
            cout<<""
        }
        if(arr[i]==target2)
        {
            index2 = i;
            mark2 = 1;
            break;
        }
    }
    if(mark2==1)
    {
        
        for(int i= index2; i<n-1; i++)
        {
            arr[i]=arr[i+1];
            // arr[0]= arr[1]
        }
        n--;
        // after the looop there are 4 elements in the array but the n=5
        // so we need to decrease the array size after deletion n--
    }
    else
    {
        cout<<target2<<"not found in the array!";
    }
    cout<<"after deleting the element :";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n\n";
    return 0;
}