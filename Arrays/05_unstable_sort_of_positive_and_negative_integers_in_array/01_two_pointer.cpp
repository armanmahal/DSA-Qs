// An array contains both positive and negative numbers in random order. Rearrange the array elements so that all negative numbers appear before all positive numbers.

// Using two pointers.

// TIME: O(N)
// SPACE: O(1)

#include <iostream>
using namespace std;

// Function to shift all the
// negative elements on left side
void shiftall(int arr[], int size)
{
    // making two pointers , one to start and one to end of array:
    int i = 0;
    int j = size - 1;

    while (i <= j)
    {
        while (arr[i] < 0 && i < size)
        {
            i++;
        }
        while (arr[j] >= 0 && j >= 0)
        {
            j--;
        }
        if (i <= j)
        {
            swap(arr[i++], arr[j--]);
        }
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
