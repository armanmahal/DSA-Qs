// returning the number of elements in union of two arrays. using a HASHSET.
// hashset is a data structure that does not stores duplicate items in it. i.e. it stores only unique items. It uses hashtable , which gives almost constant insertion time complexity.

// TIME: O(N+M)
// SPACE: O(N+M) -> N , M are the number of elements in the two arrays

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int doUnion(int a[], int n, int b[], int m)
    {
        unordered_set<int> s;

        // inserting elements of arrays to the set:
        for (int i = 0; i < n; i++)
        {
            s.insert(a[i]);
        }
        for (int i = 0; i < m; i++)
        {
            s.insert(b[i]);
        }

        return s.size();
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