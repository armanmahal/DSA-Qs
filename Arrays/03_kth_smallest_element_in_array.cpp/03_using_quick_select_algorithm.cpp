// finding the k'th smallest element in an array using quick select algorithm

// APPROACH:
/*
1.Select a random element from an array as a pivot.
2.Then partition to the array around the pivot (i.e. place the pivot element to its correct position in the array) , its help to all the smaller elements were placed before the pivot and all greater elements are placed after the pivot.
3.then Check the position of the pivot. If it is the kth element then return it.
4.If it is less than the kth element then repeat the process of the subarray.
5.If it is greater than the kth element then repeat the process of the left subarray.
*/

// TIME: O(n) -> average ; O(n^2)-> worst
// SPACE: O(1)

#include <bits/stdc++.h>
using namespace std;

// PARTITION FUNCTION : {same as in quick sort}
int partition(vector<int> &arr, int l, int r)
{
    // setting the rightmost index element as pivot:
    int pivot = arr[r];

    // setting two pointers to the leftmost index of array:
    int i = l;
    int j = l;

    while (j < r)
    {
        if (arr[j] <= pivot)
        {
            swap(arr[i], arr[j]);
            i++;
        }
        j++;
    }

    swap(arr[i], arr[r]);

    return i;
}

int kth_Smallest_Element(vector<int> &arr, int l, int r, int k)
{
    // l -> left end of array
    // r -> right end of array
    // k -> k'th element

    // doing partition of the array:
    int pivotIndex = partition(arr, l, r);

    // if the partitionIndex is the k-th smallest element
    if (pivotIndex == k - 1)
    {
        return arr[pivotIndex];
    }

    // If partitionIndex is more, recur for the left subarray
    else if (pivotIndex > k - 1)
    {
        return kth_Smallest_Element(arr, l, pivotIndex - 1, k);
    }

    // Else recur for the right subarray
    else
    {
        return kth_Smallest_Element(arr, pivotIndex + 1, r, k);
    }
}

int main()
{

    vector<int> arr;
    arr.push_back(12);
    arr.push_back(3);
    arr.push_back(5);
    arr.push_back(7);
    arr.push_back(4);
    arr.push_back(19);
    arr.push_back(26);

    int n = arr.size(), k = 3;
    cout << "Kth smallest element is " << kth_Smallest_Element(arr, 0, n - 1, k) << endl;
    return 0;
}