// given an array, rotate it cyclically by one. 2

// TIME: O(N)
// SPACE: O(1)

#include <bits/stdc++.h>
using namespace std;
void rotate(int arr[], int n);

int main()
{
    int size = 5;
    int arr[size] = {1, 2, 3, 4, 5};
    rotate(arr, size);
    for (int i : arr)
    {
        cout << i << ' ';
    }
    cout << endl;
    return 0;
}

// continously replacing the last index with an iterator:
void rotate(int arr[], int n)
{
    // setting two pointers:
    int i = 0;
    int j = n - 1;

    // traversing the array:
    while (i < j)
    {
        swap(arr[i], arr[j]);

        // incrementing i
        i++;
    }
}

// DRYRUN:
/*
1,2,3,4,5  i=0
5,2,3,4,1  i=1
5,1,3,4,2  i=2
5,1,2,4,3  i=3
5,1,2,3,4  i=4
i==j==4 {loop end}
*/