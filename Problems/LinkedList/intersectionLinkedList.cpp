#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        vector<ListNode *> m;
        while (headA)
        {
            m.push_back(headA);
            headA = headA->next;
        }
        while (headB)
        {
            if (find(m.begin(), m.end(), headB) != m.end())
                return headB;
            headB = headB->next;
        }
        return NULL;
    }
};