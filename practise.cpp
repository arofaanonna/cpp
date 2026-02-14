// Vectors
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<float> num = {4.5, 65.7, 7.7};
    cout << "size of vector :" << num.size() << endl;
    num.push_back(45.8);
    cout << "after push back size of vector :" << num.size() << endl;
    for (float value : num)
    {
        cout << "element :" << value << endl;
    }
    return 0;
}