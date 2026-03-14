#include<iostream>
#include<vector>
using namespace std;
vector <int>block;
// LIbrary
// class sell{

// }
// class purchase{

// }
//class colorse

class stack{
    public:
    void push(int val) {
        block.push_back(val);
    }

    void pop(){
        block.pop_back();
    }

    int top(){
        return block[block.size()-1];
    }
    bool empty(){
        return block.empty();
    }
};

int main()
{
   stack s;
   s.push(10);
   s.push(20);
   s.push(30);
   s.push(40);
   s.push(50);
   s.push(60);

   while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
   }
cout<<endl;
return 0;

}