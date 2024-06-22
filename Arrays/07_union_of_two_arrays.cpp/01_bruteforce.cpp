// returning the number of elements in union of two arrays. {BRUTEFORCE}

// TIME: O(N^2 + M^2)
// SPACE: O(N+M) -> N , M are the number of elements in the two arrays

#include <bits/stdc++.h>
using namespace std;

class Solution
{

private:
    // function to check if element already exists:
    bool check(vector<int> ans, int i)
    {
        for (auto x : ans)
        {
            if (x == i)
            {
                return true;
            }
        }
        return false;
    }

public:
    int doUnion(int a[], int n, int b[], int m)
    {

        // vector to store union of two arrays:
        vector<int> ans;

        // adding elements of first array to vector:
        for (int i = 0; i < n; i++)
        {
            if (!check(ans, a[i]))
            {
                ans.push_back(a[i]);
            }
        }
        // adding elements of second array to vector:
        for (int i = 0; i < m; i++)
        {
            if (!check(ans, b[i]))
            {
                ans.push_back(b[i]);
            }
        }

        // returning the number of elments in union array:
        return ans.size();
    }
};

//{ Driver Code Starts.

int main()
{
    int n = 2, m = 4;

    int a[n] = {1, 2};
    int b[m] = {2, 3, 4, 5};

    Solution ob;
    cout << ob.doUnion(a, n, b, m) << endl;
}
// } Driver Code Ends