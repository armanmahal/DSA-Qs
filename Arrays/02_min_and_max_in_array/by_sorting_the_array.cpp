// to  find the minimum and maximum elements in an array by sorting the array:

// TIME: O(N*logN) -> time to sort the array
// SPACE: O(1) -> no extra space

#include <iostream>
#include <algorithm>
using namespace std;

class Solution
{
public:
    pair<long long, long long> getMinMax(long long a[], int n)
    {

        pair<long long, long long> ans;

        sort(a, a + n);

        ans.first = a[0];
        ans.second = a[n - 1];

        return ans;
    }
};

//{ Driver Code Starts.

int main()
{

    int n = 6;
    long long a[n] = {3, 2, 1, 56, 10000, 167};

    Solution ob;
    pair<long long, long long> pp = ob.getMinMax(a, n);

    cout << pp.first << " " << pp.second << endl;

    return 0;
}