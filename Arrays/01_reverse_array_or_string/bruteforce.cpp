// reversing a string using bruteforce approach

// TIME: O(n^2) - O(n) for iteration and O(n) for concatenation
/*
Time Complexity: O(n^2) in the worst case due to the dominating factor of the concatenation operation. This concatenation operation takes O(k) time, where k is the length of the reversed_string at that iteration. Since you're performing this operation in each iteration, the total time complexity for concatenation within the loop is the sum of lengths of all reversed_string values across iterations. The total concatenation time for all iterations will be: 1 + 2 + 3 + ... + n.
*/
// SPACE: O(n)

#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string reverseWord(string str)
    {
        string ans = "";

        for (auto i : str)
        {
            ans = i + ans;
        }

        return ans;
    }
};

int main()
{
    string s;
    cout << "Enter the string: " ;
    cin >> s;
    Solution ob;
    cout << ob.reverseWord(s) << endl;
}
