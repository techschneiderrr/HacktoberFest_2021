#include<stdio.h>
#include<stdlib.h>
struct node
{
struct node *ptrtonxtnd;
struct node *ptrtoprvnd;
int element;
};
struct node *head;
struct node *tail;
void Insatbeg();
void Insatmid();
void Insatend();
void deletebeg();
void deletemid();
void deleteend();
void Showthelinkedlist();
void Showthelinkedlistreverse();
main ()
{
    int option=0;
    printf("1.Insert a node at the begining\n2.Insert a node at the middle\n3.Insert at the end\n4.Delete a node at the begining\n5.Delete a node at the middle\n6.Delete a node at the end\n7.Display\n8.Display in reverse\n9..Exit\n");
    while(option!= 9)
    {
        printf("\n Press your option?\n");
        scanf("\n%d",&option);
        switch(option)
        {

        case 1:
        Insatbeg();
        break;
        case 2:
        Insatmid();
        break;
        case 3:
        Insatend();
        break;
        case 4:
        deletebeg();
        break;
        case 5:
        deletemid();
        break;
        case 6:
        deleteend();
        break;
        case 7:
        Showthelinkedlist();
        break;
        case 8:
        Showthelinkedlistreverse();
        break;
        case 9:
        exit(0);
        break;
        default:
        printf("This option is not available");
        }
    }
}
void Insatbeg()
{
    struct node *nwptr;

    int data;
    nwptr = (struct node *)malloc(sizeof(struct node));
    if(nwptr == NULL)
    {
    printf("\n Can't insert as newprt signifies NULL \n");
    }
    else
    {
        printf("\n What value you want to insert at the beginning \n");
        scanf("%d",&data);
        if(head==NULL)
        {
        nwptr->ptrtonxtnd=NULL;
        nwptr->ptrtoprvnd=NULL;
        nwptr->element=data;
        head=nwptr;
        tail=nwptr;
        }
        else
        {
        nwptr->element=data;
        nwptr->ptrtoprvnd=NULL;
        nwptr->ptrtonxtnd = head;
        head->ptrtoprvnd=nwptr;
        head=nwptr;
        }
        printf("\n Node has been inserted at the beginning of the list\n");
    }
}
void Insatend()
{
    struct node *nwptr;;
    int data;
    nwptr = (struct node *)malloc(sizeof(struct node));
    if(nwptr == NULL)

    {
    printf("\n Can't insert as newprt signifies NULL \n");
    }
    else
    {
        printf("\n What value you want to insert at the end \n");
        scanf("%d",&data);
        if(head==NULL)
        {
        nwptr->ptrtonxtnd=NULL;
        nwptr->ptrtoprvnd=NULL;
        nwptr->element=data;
        head=nwptr;
        tail=nwptr;
        }
        else
        {
        tail->ptrtonxtnd=nwptr;
        nwptr->ptrtoprvnd=tail;
        nwptr-> ptrtonxtnd=NULL;
        nwptr->element=data;
        tail=nwptr;
        }
        printf("\nNode inserted at the end");
    }
}
void Insatmid()
{
    struct node *nwptr;
    int data;
    nwptr = (struct node *)malloc(sizeof(struct node));
    if(nwptr == NULL)
    {
    printf("\n Can't insert as newprt signifies NULL \n");
    }

    else
    {
        struct node *ptr=head;
        int len=0;
        while(ptr!=NULL)
        {
        len++;
        ptr=ptr->ptrtonxtnd;
        }
        printf("Enter after which node you want to add a new node\n");
        int p;
        scanf("%d",&p);
        printf("\nWhat value you want to insert at the new node\n");
        scanf("%d",&data);
        if(len<p)
        {
            printf("Node can't be inserted at this position");
        }
        else
        {
            ptr=head;
            for(int i=1;i<p;i++)
            {
            ptr=ptr->ptrtonxtnd;
            }
            nwptr->ptrtonxtnd=ptr->ptrtonxtnd;
            nwptr->ptrtoprvnd=ptr;
            nwptr->ptrtonxtnd->ptrtoprvnd=nwptr;
            ptr->ptrtonxtnd=nwptr;
            nwptr->element=data;
            printf("Node inserted after %d node",p);
            if(p==len)
            tail=nwptr;
        }
    }
}

void deletebeg()
{
    struct node *nwptr;
    if(head == NULL)
    printf("List is empty");
    else
    {
    nwptr = head;
    head=nwptr->ptrtonxtnd;
    head->ptrtoprvnd=NULL;
    printf("\nNode containing value %d deleted from the begining ",nwptr->element);
    free (nwptr);
    }
}
void deleteend()
{
    struct node *nwptr=tail;
    if(head==NULL)
    {
    printf("List is empty");
    }
    else
    {
        if(head->ptrtonxtnd==NULL)
        {
            printf("Node having value %d removed",head->element);
            free(head);
            free(tail);
        }
        else
        {
            printf("Node having value %d removed",tail->element);
            tail->ptrtoprvnd->ptrtonxtnd=NULL;

            tail=tail->ptrtoprvnd;
        }
    }
}
void deletemid()
{
    if(head==NULL)
    {
    printf("List is empty");
    }
    else
    {
        printf("Enter which node you want to delete\n");
        int p;
        scanf("%d",&p);
        if(p==1)
        {
        deletebeg();
        }
        else
        {
            int len=0;
            struct node *ptr=head;
            while (ptr !=NULL)
            {
            len++;
            ptr=ptr->ptrtonxtnd;
            }
            if(len==p)
            {
            deleteend();
            }
            else
            {
                ptr=head;

                while(p>1)
                {
                    ptr=ptr->ptrtonxtnd;p--;
                }
                printf("\nNode having value %d deleted from %d",ptr->element,p);
                ptr->ptrtoprvnd->ptrtonxtnd=ptr->ptrtonxtnd;
                ptr->ptrtonxtnd->ptrtoprvnd=ptr->ptrtoprvnd;
            }
        }
    }
}
void Showthelinkedlist()
{
    struct node *nwptr;
    printf("\n Show the nodes of the list \n");
    nwptr = head;
    while(nwptr!= NULL)
    {
    printf("%d\n",nwptr->element);
    nwptr=nwptr->ptrtonxtnd;
    }
}
void Showthelinkedlistreverse()
{
    struct node *nwptr=tail;
    printf("\n Show the nodes of the list in reverse \n");
    while(nwptr!=NULL)
    {
    printf("%d\n",nwptr->element);
    nwptr=nwptr->ptrtoprvnd;
    }
}
