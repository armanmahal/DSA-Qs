// given an array, rotate it cyclically by one. 1

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

// iterating the array and replacing the next element by the current one
void rotate(int arr[], int n)
{
    int currentElem = arr[0];
    for (int i = 0; i < n; i++)
    {
        int newIndex = (i + 1) % n;
        int temp = arr[newIndex];
        arr[newIndex] = currentElem;
        currentElem = temp;
    }
}