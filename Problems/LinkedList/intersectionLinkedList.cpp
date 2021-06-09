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
    // ListNode *ptr = NULL;
    // bool helper(ListNode *headA, ListNode *headB){
    //      if(headA == headB){
    //         ptr = headA;
    //         return true;
    //     }
    //     if(!headA || !headB){
    //         return 0;
    //     }
    //     return getIntersectionNode(headA->next,headB) || getIntersectionNode(headA,headB->next) || helper(headA->next,headB->next);
    // }
    
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
    //    int f = helper(headA,headB);
    //    if(f)
    //         return ptr;
    //     return NULL;
    }
};








