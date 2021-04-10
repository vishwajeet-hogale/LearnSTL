#include <stdio.h>
#include <stdlib.h>
struct node
{
    int val;
    struct node *next;
};
struct node *create_node(int val)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->val = val;
    ptr->next = NULL;
    return ptr;
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
int find_middle_element_of_list(struct node *head)
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
        return slp->val;
    }
    return -1;
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

    int a = find_middle_element_of_list(majo);
    printf("The middle elemnt is : %d", a);

    return 0;
}