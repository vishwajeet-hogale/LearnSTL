#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <string>
class Solution
{
public:
    string addStrings(string num1, string num2)
    {
        int index_1 = num1.length() - 1;
        int index_2 = num2.length() - 1;
        int carry = 0;
        string ans;

        while (index_1 > -1 || index_2 > -1)
        {
            int digit_1 = (index_1 >= 0) ? num1[index_1--] - '0' : 0;
            int digit_2 = (index_2 >= 0) ? num2[index_2--] - '0' : 0;
            int sum = digit_1 + digit_2 + carry;

            //> put digit into string
            ans.insert(ans.begin(), (sum % 10) + '0');

            carry = (sum > 9) ? sum / 10 : 0;
        }

        return (carry != 0) ? "1" + ans : ans;
    }
};