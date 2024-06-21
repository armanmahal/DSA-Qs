// using two stacks to store negs and positive elements of array and then adding them back to array:

// TIME: O(2N) ~ O(N)
// SPACE: O(N)

#include <iostream>
#include <stack>
using namespace std;

// Function to shift all the negative elements on left side
// [STABLE ALGORITHM*]
void shiftall(int arr[], int n)
{
    // making two stacks:
    stack<int> negative;
    stack<int> positive;

    // traversing the array:
    for (int i = 0; i < n; i++)
    {
        int e = arr[i];

        // if positive:
        if (e >= 0)
        {
            positive.push(e);
        }
        // if negative:
        else
        {
            negative.push(e);
        }
    }

    // adding elements back to array:
    // {NOTE: Stack returns back elements in reverse order}

    int index = n - 1;
    // from positive stack:
    while (!positive.empty())
    {
        arr[index--] = positive.top();
        positive.pop();
    }
    // from negative stack:
    while (!negative.empty())
    {
        arr[index--] = negative.top();
        negative.pop();
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
