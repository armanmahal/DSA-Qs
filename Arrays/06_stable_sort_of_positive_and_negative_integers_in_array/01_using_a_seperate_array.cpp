// first storing all negative integers to a seperate array and then storing all positive ints to it:

// TIME: O(3N) ~ O(N)
// SPACE: O(N)

#include <iostream>
using namespace std;

// Function to shift all the negative elements on left side
// [STABLE ALGORITHM*]
void shiftall(int arr[], int n)
{
    // making a new array:
    int res[n] = {0};
    int index = 0;

    // storing all neg ints to it:
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            res[index++] = arr[i];
        }
    }

    // storing all positive ints to it:
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            res[index++] = arr[i];
        }
    }

    // copying value to original array:
    for (int i = 0; i < n; i++)
    {
        arr[i] = res[i];
    }
}

// Function to print the array
void display(int arr[], int right)
{

    // Loop to iterate over the element
    // of the given array
    for (int i = 0; i <= right; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Driver Code
int main()
{
    int arr[] = {-12, 11, -13, -5,
                 6, -7, 5, -3, 11};
    int arr_size = sizeof(arr) /
                   sizeof(arr[0]);

    // Function Call
    shiftall(arr, arr_size);
    display(arr, arr_size - 1);
    return 0;
}
