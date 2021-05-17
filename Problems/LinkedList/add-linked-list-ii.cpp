#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* make_list(vector<int> &nums){
    ListNode* root = new ListNode(nums[0]);
    ListNode* ptr = root;
    if(nums.size()>1){
        for(int i=1;i<nums.size();i++){
            ListNode* p = new ListNode(nums[i]);
            ptr->next = p;
            ptr = ptr->next;
        }
    }
    return root;
}
ListNode * reverse(ListNode *head){
    ListNode *curr = head,*prev =NULL,*next = NULL;
    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    return head;
}
ListNode* add(ListNode *l1,ListNode* l2,int carry){
    if(!l1 && !l2 && carry == 0){
        return NULL;
    }
    int a=0,b=0;
    if(l1)
        a = l1->val;
    if(l2){
        b = l2->val;
    }
    int value = a+b+carry;
    ListNode *head = new ListNode(value%10);
    head->next = add(l1?l1->next:NULL,l2?l2->next:NULL,value/10);
    return head;
}
ListNode* add_list(ListNode *l1,ListNode *l2){
    l1 = reverse(l1);
    l2 = reverse(l2);
    ListNode *res = add(l1,l2,0);
    res = reverse(res);
    return res;

}
int main(){
    vector<int> l1;
    l1.push_back(5);
    l1.push_back(6);
    l1.push_back(3);
    vector<int> l2;
    l2.push_back(5);
    l2.push_back(6);
    l2.push_back(3);
    ListNode* list1 = make_list(l1);
    ListNode* list2 = make_list(l2);
    ListNode *res = add_list(list1,list2);
    while(res!=NULL){
        cout<<res->val<<"->";
        res = res->next;
    }
    cout<<"NULL"<<endl;
    return 0;
}