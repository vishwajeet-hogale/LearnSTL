#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
};
class Solution
{
public:
    void deleteNode(ListNode *node)
    {
        ListNode *ptr = node;
        ListNode *prev = NULL;
        while (ptr->next)
        {
            ptr->val = ptr->next->val;
            prev = ptr;
            ptr = ptr->next;
        }
        prev->next = NULL;
    }
};