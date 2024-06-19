// reversing a string or array with two pointer approach:

// TIME: O(n)
/*
The loop runs through half of the array, so it’s linear with respect to the array size.
*/
// SPACE: o(1)

#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string reverseWord(string str)
    {
        // initializing two pointers:
        int i = 0;
        int j = str.size() - 1;

        while (j >= i)
        {
            swap(str[i], str[j]);
            i++;
            j--;
        }

        return str;
    }
};

int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;
    Solution ob;
    cout << ob.reverseWord(s) << endl;
}