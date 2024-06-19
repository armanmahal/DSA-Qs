// to find the k'th smallest element in an array by sorting the array {BRUTEFORCE}

// TIME: O(N*logN) -> time to sort the array
// SPACE: O(1) -> no extra space

#include <iostream>
#include <algorithm>
using namespace std;

class Solution
{
public:
    // arr : given array
    // n : size of array
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int n, int k)
    {
        sort(arr, arr + n);
        return arr[k - 1];
    }
};

//{ Driver Code Starts.

int main()
{
    int number_of_elements = 6;
    int a[number_of_elements] = {7, 10, 4, 3, 20, 15};
    int k = 3;

    Solution ob;
    cout << ob.kthSmallest(a, number_of_elements, k) << endl;

    return 0;
}