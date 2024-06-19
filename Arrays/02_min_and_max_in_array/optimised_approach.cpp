// The idea is to iterate through the array and update the minimum and maximum element accordingly.

// TIME: O(N) -> iterating single time
// SPACE: O(1) -> no extra space

#include <iostream>
#include <algorithm>
using namespace std;

class Solution
{
public:
    pair<long long, long long> getMinMax(long long a[], int n)
    {
        // Making a pair to store max and min element:
        pair<long long, long long> ans = make_pair(INT64_MAX, INT64_MIN);

        // iterating the array and updating min and max elements accordingly:
        for (int i = 0; i < n; i++)
        {
            if (a[i] < ans.first)
            {
                ans.first = a[i];
            }
            if (a[i] > ans.second)
            {
                ans.second = a[i];
            }
        }

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