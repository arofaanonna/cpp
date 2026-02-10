#include<iostream>
#include<string>
using namespace std;
bool questions(string q, string a, string b, string c, string d, char correct)
{
    char userChoice;
    cout<<"\n------------------"<<endl;
    cout<<q<<endl;
    cout<<'\n';
    cout<<" a." <<a <<" \tb." <<b <<endl;
    cout<<'\n';
    cout<<" c." <<c <<" \td." <<d <<endl;
    cout<<'\n';
    cout<<"Enter your choice (a-d) or 0 to quit :";
    cin>>userChoice;

    if(userChoice == correct)
    {
        cout<<"Correct answer!"<< endl;
        return true;
    }
    else if (userChoice == 0)
    {
        cout<<"Quitting the game!"<<endl;
        return false;
    }
    else
    {
        cout<<"Wrong answer!"<<endl;
        return false;
    }
}
int main()
{
    int totalScore = 0;
    int pointPerAns = 1000;
    cout<<"Welcome to the game!"<<endl;
    //Question 1
    if(questions("1.Which is the capital of Bangladesh?","Sylhet","Dhaka","Khulna","Rajshahi",'b'))
    {
        totalScore +=pointPerAns;
    }
    else
    {
        cout<<"Your score is :"<<totalScore<<endl;
        return 0;
    }

}
