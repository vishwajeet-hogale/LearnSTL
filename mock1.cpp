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
node* reverseLinkedList(node* head){
    if(head==NULL){
        return NULL;
    }
    node* curr = head;
    node*prev = NULL,*next = NULL;
    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        
    }
    head = prev;
    return head;
}
int main()
{
    int n;

    vector<int> l1;
    l1.push_back(1);    
    l1.push_back(2);    
    l1.push_back(3);
    l1.push_back(3);
    l1.push_back(3);
    
    node *list1 = push(l1);
    
    printList(list1);
    node* list2 = reverseLinkedList(list1);
    printList(list2);


    return 0;
}