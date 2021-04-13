#include <stdio.h>
#include <stdlib.h>
struct node
{
    int val;
    struct node *next;
};
struct treenode{
    int val;
    struct treenode *left,*right;
};
int count(struct node *head){
    int c = 0 ;
    struct node *temp = head;
    while(temp){
        temp = temp->next;
        c++;
    }
    return c;
}
struct treenode* create_tree(int val){
    struct treenode *ptr = (struct treenode *)malloc(sizeof(struct treenode));
    ptr->val = val;
    ptr->left = NULL;
    ptr->right = NULL;
    return ptr;
}
struct node *create_node(int val)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->val = val;
    ptr->next = NULL;
    return ptr;
}
struct node* find_middle_element_of_list(struct node *head)
{
    struct node *slp = head;
    struct node *ftp = head;
    if (head != NULL)
    {
        while (ftp != NULL && ftp->next != NULL)
        {
            slp = slp->next;
            ftp = ftp->next->next;
        }
        return slp;
    }
    return NULL;
}
struct treenode *soretedListtoBST(struct node* head){
    if(head == NULL){
        return NULL;
    }
    struct node* mid = find_middle_element_of_list(head);
    struct treenode *p =  create_tree(mid->val);
    if( head == mid){
        return p;
    }
    p->left = soretedListtoBST(head);
    p->right = soretedListtoBST(mid->next);
    return p;
}
void preOrder(struct treenode* node) 
{ 
    if (node == NULL) 
        return; 
    printf("%d->",node->val); 
    preOrder(node->left); 
    preOrder(node->right); 
}
struct node *push(struct node *head, int val)
{
    for (int i = 0; i < val; i++)
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
    printf("Enter teh valuse of n which is the number of elemnts in the list : \n");
    scanf("%d", &n);

    struct node *majo = push(NULL, n);
    // printList(majo);
    struct node* m = majo;
  
    struct treenode* ptr = soretedListtoBST(m);
    
    preOrder(ptr);

    return 0;
}