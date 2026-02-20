// find unique number
// n^n=0
// n^0=n
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums{
        4,
        2,
        3,
        2,
        3,
    };
    int ans = 0;
    for (int value : nums)
    {
        ans ^= value;
    }
    cout << "unique number :" << ans << endl;
    return 0;
}
