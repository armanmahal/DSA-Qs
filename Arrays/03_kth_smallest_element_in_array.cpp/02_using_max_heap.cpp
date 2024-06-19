// by using a max heap(or priority queue DS an in cpp) {BRUTEFORCE BUT SLIGHTLY MORE OPTIMIZED}:

// TIME: O(N*log(k)) -> O(n) to traverse the array and O(logk) to insert or pop from the HEAP. {n->elements in array, k-> k'th smallest element}
// SPACE: O(k) -> priority queue made of size 'k' where is the number of the smallest element to find

#include <iostream>
#include <queue>
using namespace std;

class Solution
{
public:
    // arr : given array
    // n : size of array
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int n, int k)
    {
        // creating a max heap:
        priority_queue<int> maxHeap;

        // iterating the array:
        for (int i = 0; i < n; i++)
        {
            // pushing the current element to the array:
            maxHeap.push(arr[i]);
            // if size of heap exceeds the k'th element which we have to find, remove the top of heap , i.e. the largest element:
            if (maxHeap.size() > k)
            {
                maxHeap.pop();
            }
        }

        // after the loop the top of the heap will have the k'th smallest element:
        return maxHeap.top();
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