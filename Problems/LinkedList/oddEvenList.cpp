#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct ListNode{
    int val;
    ListNode *next;
};
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode *last = NULL;int n =1;
        ListNode *head1 = head;
        if(head == NULL)
            return NULL;
        if(head->next == NULL)
            return head;
     
        while(head->next!=NULL){
            n++;
            head= head->next;
        }
        last = head;
        int i=0;
        ListNode *ptr = head1;
        // cout<<last->val;
        while(i<n/2){
            last->next=head1->next;
            head1->next = head1->next->next;
            
            last = last->next;
            last->next = NULL;
            head1 = head1->next;
            i++;
        }
        return ptr;
    }
};