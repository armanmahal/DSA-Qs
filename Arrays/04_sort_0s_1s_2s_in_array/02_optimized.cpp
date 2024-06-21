// using three pointers ~ low, high, current;

// TIME: O(N) -> one traversal
// SPACE: O(1)
// {STABLE ALGORITHM*}

// APPROACH:
/* https://www.geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/ */

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    void sort012(int a[], int n)
    {
        // setting the three pointers:
        int low = 0;
        int current = 0;
        int high = n - 1;

        // traversing the array:
        while (current <= high)
        {
            // swapping with low if current element is 0:
            if (a[current] == 0)
            {
                swap(a[low], a[current]);
                low++;
                current++;
            }
            // incrementing current if current element is 1:
            else if (a[current] == 1)
            {
                current++;
            } // swapping with high if current element is 2:
            else if (a[current] == 2)
            {
                swap(a[high], a[current]);
                high--;
            }
        }
    }
};

//{ Driver Code Starts.
int main()
{

    int n = 5;
    int a[n] = {1, 0, 2, 0, 1};

    Solution ob;
    ob.sort012(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    return 0;
}

// } Driver Code Ends