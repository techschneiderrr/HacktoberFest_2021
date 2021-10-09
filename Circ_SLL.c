#include<stdio.h>
#include<stdlib.h>
void insertatbeg(int num);
void insertatend(int num);
void insertatmid(int num,int pos);
void deleteatbeg();
void deleteatend();
void deleteatmid(int data);
void showthelist();

struct node
{
   int element;
   struct node *ptrtonxtnd;
};
struct node *head = NULL;

int main()
{
    int choice,value,location,k;
    printf("*******    Circular Linked List Implementation    *******");
    while(1)
    {
        printf("\n***********  Options Menu  *************\n");
        printf("1.Insert_at_Begin\n2.Insert_at_End\n3.Insert_at_Location\n4.Delete_Begin\n5.Delete_End\n6.Delete_Specific\n7.Display\n8.Exit\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter the value to be inserted: ");
                scanf("%d",&value);
                insertatbeg(value);
                break;
            case 2:
                printf("Enter the value to be inserted: ");
                scanf("%d",&value);
                insertatend(value);
                break;
            case 3:
                printf("Enter the value to be inserted: ");
                scanf("%d",&value);
                printf("Enter the location where you want to insert: ");
                scanf("%d",&location);
                insertatmid(value,location);
                break;
            case 4:
                deleteatbeg();
                break;
            case 5:
                deleteatend();
                break;
            case 6:
                printf("Enter the Data to be Deleted: ");
                scanf("%d",&k);
                deleteatmid(k);
                break;
            case 7:
                showthelist();
                break;
            case 8:
                printf("Exiting...");
                exit(0);
      }
   }
}

void insertatbeg(int num)
{
    struct node *newNode;
    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->element = num;
    if(head == NULL)
    {
       head = newNode;
       newNode->ptrtonxtnd = head;
    }
    else
    {
       struct node *temp = head;
       while(temp->ptrtonxtnd != head)
       {
           temp = temp->ptrtonxtnd;
       }
       newNode->ptrtonxtnd = head;
       head = newNode;
       temp->ptrtonxtnd = head;
    }
    printf("\nInsertion success");
}
void insertatend(int num)
{
   struct node *newNode;
   newNode = (struct node*)malloc(sizeof(struct node));
   newNode -> element = num;
   if(head == NULL)
   {
      head = newNode;
      newNode -> ptrtonxtnd = head;
   }
   else
   {
      struct node *temp = head;
      while(temp -> ptrtonxtnd != head)
      {
          temp = temp->ptrtonxtnd;
      }
      temp->ptrtonxtnd = newNode;
      newNode->ptrtonxtnd = head;
   }
   printf("\nInsertion success");
}
void insertatmid(int num,int pos)
{
    struct node *newNode,*curNode;
    int i;
    if(head == NULL)
    {
        printf("No data found in the List yet");
    }
    else if(pos == 1)
    {
        insertatbeg(num);
    }
    else
    {
        newNode=(struct node *)malloc(sizeof(struct node));
        newNode->element = num;
        curNode = head;
        for(i=2;i<=pos-1;i++)
        {
            curNode = curNode->ptrtonxtnd;
        }
        newNode->ptrtonxtnd = curNode->ptrtonxtnd;
        curNode->ptrtonxtnd = newNode;
        printf("\nInsertion success");
    }
}
void deleteatbeg()
{
    struct node *ptr;
    if(head == NULL)
    {
        printf("\nUnderFlow\n");
    }
    else if(head->ptrtonxtnd == head)
    {
        head = NULL;
        free(head);
        printf("\nNode Deleted\n");
    }
    else
    {
        ptr = head;
        while(ptr->ptrtonxtnd != head)
        {
            ptr = ptr->ptrtonxtnd;
        }
        ptr->ptrtonxtnd = head->ptrtonxtnd;
        free(head);
        head = ptr->ptrtonxtnd;
        printf("\nNode Deleted\n");
    }
}
void deleteatend()
{
    struct node *ptr, *preptr;
    if(head==NULL)
    {
        printf("\nUnderFlow\n");
    }
    else if (head->ptrtonxtnd == head)
    {
        head = NULL;
        free(head);
        printf("\nNode Deleted\n");
    }
    else
    {
        ptr = head;
        while(ptr->ptrtonxtnd != head)
        {
            preptr=ptr;
            ptr = ptr->ptrtonxtnd;
        }
        preptr->ptrtonxtnd = ptr->ptrtonxtnd;
        free(ptr);
        printf("\nNode Deleted\n");
    }
}
void deleteatmid(int data)
{
    struct node *current = NULL;
    struct node *prev = NULL;
    if(head==NULL)
    {
      printf("Linked List not initialized");
      return;
    }
    if(head->element == data)
    {
      if(head->ptrtonxtnd != head)
      {
         deleteatbeg();
         return;
      }
      else
      {
         head = NULL;
         printf("List is empty\n");
         exit(0);
      }
   }
   else if(head->element != data && head->ptrtonxtnd == NULL)
   {
      printf("%d not found in the list\n",data);
      return;
   }
   current = head;
   while(current->ptrtonxtnd != head && current->element != data)
   {
      prev = current;
      current = current->ptrtonxtnd;
   }
   if(current->element == data)
   {
      prev->ptrtonxtnd = prev->ptrtonxtnd->ptrtonxtnd;
      free(current);
   }
   else
   {
       printf("%d not found in the list",data);
   }
}
void showthelist()
{
    struct node *current;
    int n = 1;
    if(head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        current = head;
        printf("Data in the Link List:\n");
        do
        {
            printf("Data %d = %d\n", n, current->element);
            current = current->ptrtonxtnd;
            n++;
        }
        while(current != head);
    }
}

