#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int dp[59] = {0};
int integerBreak(int n)
{
    if (n <= 2)
        return 1;
    if (dp[n])
        return dp[n];
    int ans = 1 * (n - 1);
    for (int i = 2; i < n; i++)
    {
        int product = i * max(n - i, integerBreak(n - i));
        if (ans < product)
            ans = product;
    }
    dp[n] = ans;
    return dp[n];
}
int main()
{
    cout << integerBreak(10) << endl;
    return 0;
}