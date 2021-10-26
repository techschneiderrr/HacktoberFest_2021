#include<stdio.h>
#include<stdlib.h>
struct node
{
int element;
struct node *ptrtonxtnd;
};
struct node *head;
void insatbeg();
void insertmid();
void insertend();
void deletefirst();
void deletemid();
void deleteend();
void showthelist();
void main ()
{
    int option =0;
    printf("1.Insert a node at the begining\n2.Insert a node at the middle\n3.Insert at the end\n4.Delete a node at the begining\n5.Delete a node at the middle\n6.Delete a node at the end\n7.Display\n8..Exit\n");
    while(option != 8)
    {
        printf("\nWhat is your option:- ");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
            insatbeg();
            break;
            case 2:
            insertmid();
            break;
            case 3:
            insertend();
            break;
            case 4:
            deletefirst();
            break;
            case 5:
            deletemid();
            break;
            case 6:
            deleteend();
            break;
            case 7:
            showthelist();
            break;
            case 8:
            exit(0);
            break;
            default:
            printf("This option is not available");
        }
    }
}

void insatbeg()
{
    struct node *nwptr;
    int data;
    nwptr = (struct node *) malloc(sizeof(struct node *));
    if(nwptr == NULL)
    printf("\n Can't insert \n");
    else
    {
        printf("\nEnter the value to be inserted in the list\n");
        scanf("%d",&data);
        nwptr->element = data;
        nwptr->ptrtonxtnd = head;
        head = nwptr;
        printf("\nNode inserted");
    }
}
void insertmid()
{
    struct node *nwptr;
    int data;
    nwptr = (struct node *)malloc(sizeof(struct node));
    if(nwptr == NULL)
    printf("\n Can't insert as newprt signifies NULL \n");
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
    printf("Node can't be inserted at this position");
    else
    {
        ptr=head;
        for(int i=1;i<p;i++)
        ptr=ptr->ptrtonxtnd;
        nwptr->ptrtonxtnd=ptr->ptrtonxtnd;
        ptr->ptrtonxtnd=nwptr;
        nwptr->element=data;
        printf("Node inserted after %d node",p);
        }
        }
    }
    void insertend()
    {
        struct node* nwptr=malloc(sizeof(struct node));
        int data;
        if(nwptr == NULL)
        printf("\n Can't insert \n");
        else
        {
            printf("Enter the value to be inserted at the list\n");
            scanf("\n%d",&data);
            if(head==NULL)
            {
                nwptr->element=data;
                nwptr->ptrtonxtnd=head;
                head=nwptr;
                printf("\nNode inserted");

            }
            else
            {
                struct node* ptr=head;
                while (ptr-> ptrtonxtnd != NULL)
                ptr = ptr -> ptrtonxtnd;
                ptr->ptrtonxtnd = nwptr;
                nwptr->ptrtonxtnd = NULL;
                nwptr->element=data;
                printf("\nNode inserted");
            }
        }
}
void deletefirst()
{
    struct node *nwptr;
    if(head == NULL)
    printf("List is empty");
    else
    {
        nwptr = head;
        head = nwptr->ptrtonxtnd;
        printf("\nNode containing value %d deleted from the begining ",nwptr->element);
        free(nwptr);
    }
}
void deletemid()
{
    if(head==NULL)
    printf("List is empty");
    else
    {
        printf("Enter which node you want to delete\n");
    int p;
    scanf("%d",&p);
    if(p==1)
    deletefirst();
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
            deleteend();
        else
        {
            ptr=head;
            while(p>2)
            {
            ptr=ptr->ptrtonxtnd;
            p--;
            }
            printf("\nNode having value %d deleted from %d",ptr->ptrtonxtnd->element,p);
            ptr->ptrtonxtnd=ptr->ptrtonxtnd->ptrtonxtnd;
        }
        }
    }
}
void deleteend()
{
    struct node *nwptr=head;
    if(head==NULL)
    printf("List is empty");
    else
    {
    if(head->ptrtonxtnd==NULL)
    {
    printf("Node having value %d removed",head->element);
    free(head);
    }
    else
    {
        while(nwptr->ptrtonxtnd->ptrtonxtnd!=NULL)
        nwptr=nwptr->ptrtonxtnd;
        printf("Node containing value %d removed from the end",nwptr->ptrtonxtnd->element);
        nwptr->ptrtonxtnd=NULL;
    }
    }
}
void showthelist()
{
    struct node *nwptr;
    nwptr = head;
    if(nwptr == NULL)
    printf(" Can't Display");
    else
    {
    printf("\n Inserted values in the linked list.\n");
    while (nwptr!=NULL)
    {
    printf("\n%d",nwptr->element);
    nwptr = nwptr -> ptrtonxtnd;
}
}
}
