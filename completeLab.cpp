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


    int choice;//for choose part
    cout<<"\n\n----Part------\n";
    cout<<"1.Search element \n";
    cout<<"2.delete element \n";
    cout<<"3.insert element \n";
    cout<<"4.sort element \n";
    cout<<endl;
    cout<<"enter your choice (1-4) :";
    cin>>choice;

     if(choice==1){
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
           mark =1;//means number found
           break;
        }
    }
    if(mark==1)//when number found in array

    cout<< target<<" found at index no :"<<index<<endl;
    else
    cout<<target<<"not found in array!"<<endl;
    cout<<"\n\n";
     }
   else if(choice==2){
    cout<<"\n\n-----delete element-----"<<endl;
    int target2, mark2=0, index2;
    cout<<"Enter the number you want to delete :";
    cin>>target2;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==target2)
        {
            index2 = i;
            mark2 = 1;
            break;
        }
    }
    if(mark2==1)
    {

        for(int i= index2; i<n-1; i++)//int i=index2 is,, set the index of exact values
                                       //i<n-1 is,,next value move at exact index
        {
            arr[i]=arr[i+1];
            //next element move forward
           //that seems the value at index i and index[i+1] are same
        }
        n--;
        //after the loop last ixdex is empty then delete it that decrease array size
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
   }
   else if(choice==3){
     cout<<"-------Insert element-----------"<<endl;
    int target3, index3;
    cout<<"enter the element you want to insert :";
    cin>>target3;//new element
    cout<<"enter the index no you want to insert :";
    cin>>index3;//position;
    if(index3<0 || index3>n)//small than 0, large than array range shows wrong
    {
        cout<<"Invalid Index!\n";
    }
    else
    {
        //right shift to make space
        for(int i=n; i>index3; i--)//index3 is exact
                                  //if i>index3 it moves right
                                  //when index3<i elements not move
        {
            arr[i]=arr[i-1];//after moving elements in next index i moves back
                           // at that time arr[i]=arr[i-1]
        }
        arr[index3]=target3;//insert element at desired index
        n++;//increase size
        cout<<"after inserting the array element :";
        for(int i=0; i<n; i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
    cout<<"\n\n";
   }
    else if(choice==4){
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
    }
    else
    {
    cout<<"Invalid choice";
    }
    return 0;
}
