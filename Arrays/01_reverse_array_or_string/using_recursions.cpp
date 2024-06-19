// reversing an array or string using recursions.

// TIME: O(n) -> The recursion goes through each element once
// SPACE: O(log n) -> recursive stack space

#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    void reverseWord(string &str, int start, int end)
    {
        // base case:
        if (start >= end)
        {
            return;
        }

        // swapping the current start and end indexes of string:
        swap(str[start], str[end]);

        // recursive call to reverse next indexes:
        reverseWord(str, start + 1, end - 1);
    }
};

int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;
    Solution ob;
    ob.reverseWord(s, 0, s.length() - 1);
    cout << s << endl;
}