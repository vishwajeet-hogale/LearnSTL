#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int val;
    struct node *next;
};
struct node *create_node(int val)
{
    node *ptr = new node;
    ptr->val = val;
    ptr->next = NULL;
    return ptr;
}
node *insert(node *root,int val){
        node *head;

        if(root == NULL){
            head = create_node(val);

            return head;
        }

            node *ptr = create_node(val);
            while(root->next){
               
                root = root->next;
            }
            root->next = ptr;

        return head;
    }
node *addTwoNumbers(node* l1, node* l2) {
        int rem =0, digit = 0;
        // if(!l1 || !l2){
        //     return NULL;
        // }
        node* head = NULL;

        if(l1 == NULL){
            return l2;
        }
        if(l2 == NULL){
            return l1;
        }
        else{
          
        while(l1 != NULL && l2 != NULL){
            if((l1->val + l2->val ) >= 10) { 
                digit = l1->val + l2->val - 10 + rem ;
                }
            else{
                digit = l1->val + l2->val + rem;
            }

            rem = (l1->val + l2->val) / 10;
            head = insert(head,digit);
            l1 = l1->next;
            l2 = l2->next;

        }
        }
        return head;

    }
    struct node *push(vector<int>&nums)
    {
        node *head = NULL;
        for (int &i:nums)
        {

            struct node *ptr = create_node(i);
            if (head == NULL)
            {
                head = ptr;
            }
            else
            {
                struct node *p = head;
                while (p->next != NULL)
                {
                    p = p->next;
                }

                p->next = ptr;
            }
        }

    return head;
}
void printList(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d->", ptr->val);
        ptr = ptr->next;
    }
    printf("NULL\n");
}
int main()
{
    int n;

    vector<int> l1;
    l1.push_back(1);    
    l1.push_back(1);    
    l1.push_back(1);
    vector<int> l2;
    l2.push_back(1);    
    l2.push_back(2);    
    l2.push_back(2);
    node *list1 = push(l1);
    node *list2 = push(l2);
    node *res = addTwoNumbers(list1,list2);
    printList(res);


    return 0;
}