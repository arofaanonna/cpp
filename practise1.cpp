#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec = {4, 5, 6, 7};
    cout << "size of vector :" << vec.size() << endl;
    vec.push_back(25);
    vec.push_back(85);
    vec.push_back(45);
    cout << "after push back size of vector :" << vec.size() << endl;
    vec.pop_back();
    for (int value : vec)
    {
        cout << "element :" << value << endl;
    }
    return 0;
}