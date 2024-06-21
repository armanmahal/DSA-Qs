// have three variables to store the count of 0s,1s,2s and then add them back to the array.

// TIME: O(2N) -> one traversal to count the number of 0s,1s,2s and one traversal to add them back to the array.
// SPACE: O(1)
// {not a STABLE ALGORITHM* to sort}

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    void sort012(int a[], int n)
    {
        int zero = 0;
        int one = 0;
        int two = 0;

        // counting the number of 0s,1s,2s:
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                zero++;
            }
            else if (a[i] == 1)
            {
                one++;
            }
            else
            {
                two++;
            }
        }

        // adding counted 0s,1s,2s back to the array:
        int index = 0;
        while (zero != 0)
        {
            a[index] = 0;
            index++;
            zero--;
        }
        while (one != 0)
        {
            a[index] = 1;
            index++;
            one--;
        }
        while (two != 0)
        {
            a[index] = 2;
            index++;
            two--;
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