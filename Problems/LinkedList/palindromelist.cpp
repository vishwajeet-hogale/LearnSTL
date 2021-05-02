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
bool isPalindrome(node* head) {

        node *slow = head;
        stack<int> s;
        while(slow !=NULL){
            s.push(slow->val);
            slow = slow->next;
        }
        while(head){
            int i = s.top();
            s.pop();
            if(head->val != i){
                return false;
            }
            head = head->next;
        }
                     
        return true;
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
    l1.push_back(2); 

    l1.push_back(1);  
    l1.push_back(2);    
    l1.push_back(1);
    
    node *list1 = push(l1);
    cout<<isPalindrome(list1)<<endl;;




    return 0;
}