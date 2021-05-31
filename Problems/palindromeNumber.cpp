#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPalindrome(int x)
    {
        long int num = x, rev = 0;
        if (x < 0)
            return false;
        while (x > 0)
        {
            int dig = x % 10;
            rev = rev * 10 + dig;
            x = x / 10;
        }
        if (rev == num)
            return true;
        return false;
    }
};