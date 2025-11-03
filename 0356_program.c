#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE first, PPNODE last, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    
    newn->data = no;
    newn->next = NULL;

    if(*first == NULL && *last == NULL)
    {
        *first = newn;
        *last = newn;

        (*last) -> next = *first;
    }
    else
    {
        newn->next = *first;
        *first = newn;

        (*last) -> next = *first;
    }
}

void InsertLast(PPNODE first, PPNODE last, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    
    newn->data = no;
    newn->next = NULL;

    if(*first == NULL && *last == NULL)
    {
        *first = newn;
        *last = newn;

        (*last) -> next = *first;
    }
    else
    {
        (*last)->next = newn;
        *last = newn;

        (*last) -> next = *first;
    }
}

void InsertAtPos(PPNODE first, PPNODE last, int no, int pos)
{
    int size = 0, i = 0;
    PNODE newn = NULL;
    PNODE temp = NULL;

    size = 0;
    if(*first == NULL && *last == NULL)
    {
        size = 0;
    }
    else
    {
        temp = *first;
        do
        {
            size++;
            temp = temp->next;
        } while(temp != (*last)->next);
    }

    if((pos < 1) || (pos > size + 1))
    {
        return;
    }

    if(pos == 1)
    {
        InsertFirst(first, last, no);
    }
    else if(pos == size + 1)
    {
        InsertLast(first, last, no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = no;
        newn->next = NULL;

        temp = *first;

        for(i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
    }
}

void DeleteFirst(PPNODE first, PPNODE last)
{
    if(*first == NULL && *last == NULL)
    {
        return;
    }
    else if(*first == *last)
    {
        free(*first);
        *first = NULL;
        *last = NULL;
    }
    else
    {
        *first = (*first)->next;
        free((*last)->next);
        (*last)->next = *first;
    }
}

void DeleteLast(PPNODE first, PPNODE last)
{
    PNODE temp = *first;

    if(*first == NULL && *last == NULL)
    {
        return;
    }
    else if(*first == *last)
    {
        free(*first);
        *first = NULL;
        *last = NULL;
    }
    else
    {
        while(temp->next != *last)
        {
            temp = temp->next;
        }

        free(*last);
        *last = temp;
        (*last)->next = *first;
    }
}

void DeleteAtPos(PPNODE first, PPNODE last, int pos)
{
    int size = 0, i = 0;
    PNODE temp = NULL;
    PNODE targ = NULL;

    size = 0;
    if(*first == NULL && *last == NULL)
    {
        size = 0;
    }
    else
    {
        temp = *first;
        do
        {
            size++;
            temp = temp->next;
        } while(temp != (*last)->next);
    }

    if((pos < 1) || (pos > size))
    {
        return;
    }

    if(pos == 1)
    {
        DeleteFirst(first, last);
    }
    else if(pos == size)
    {
        DeleteLast(first, last);
    }
    else
    {
        temp = *first;

        for(i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }

        targ = temp->next;
        temp->next = targ->next;
        free(targ);
    }
}

void Display(PNODE first, PNODE last)
{
    if(first == NULL && last == NULL)
    {
        return;
    }

    do
    {
        printf("| %d | -> ",first->data);
        first = first -> next;
    } while (first != last -> next);
    
    printf("\n");
}

int Count(PNODE first, PNODE last)
{
    int iCount = 0;

    if(first == NULL && last == NULL)
    {
        return iCount;
    }

    do
    {
        iCount++;
        first = first -> next;
    } while (first != last -> next);

    return iCount;
}

int main()
{
    PNODE head = NULL;
    PNODE tail = NULL;

    int iRet = 0;

    InsertFirst(&head,&tail,51);
    InsertFirst(&head,&tail,21);
    InsertFirst(&head,&tail,11);
    
    InsertLast(&head,&tail,101);
    InsertLast(&head,&tail,111);
    InsertLast(&head,&tail,121);
    
    Display(head,tail);

    iRet = Count(head,tail);

    printf("Number of elements are : %d\n",iRet);

    InsertAtPos(&head,&tail,75,4);
    Display(head,tail);

    DeleteAtPos(&head,&tail,4);
    Display(head,tail);

    DeleteFirst(&head,&tail);
    DeleteLast(&head,&tail);

    Display(head,tail);

    iRet = Count(head,tail);
    printf("Number of elements are : %d\n",iRet);

    return 0;
}
