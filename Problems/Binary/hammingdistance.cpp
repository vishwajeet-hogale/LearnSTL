#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int hammingDistance(int x, int y)
{
    int x1 = x ^ y;
    int cnt = 0;
    while (x1 > 0)
    {
        cnt += x1 & 1;
        x1 >>= 1;
    }
    return cnt;
}
int main()
{
    int x = 0, y = 1;
    cout << hammingDistance(x, y) << endl;
    return 0;
}