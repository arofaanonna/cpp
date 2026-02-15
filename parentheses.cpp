#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string str)
{
    stack<char> st;

    for (int i = 0; i < str.size(); i++)
    {
        // Opening brackets → push
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            st.push(str[i]);
        }
        else
        { // Closing brackets
            if (st.size() == 0)
            {
                return false;
            }

            if ((st.top() == '(' && str[i] == ')') ||
                (st.top() == '{' && str[i] == '}') ||
                (st.top() == '[' && str[i] == ']'))
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
    }

    // If stack empty → valid
    return st.size() == 0;
}

int main()
{
    string s;
    cout << "Enter brackets string: ";
    cin >> s;

    if (isValid(s))
        cout << "Valid Parentheses\n";
    else
        cout << "Invalid Parentheses\n";

    return 0;
}
