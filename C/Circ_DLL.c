#include <stdio.h>
#include <stdlib.h>

struct node
{
    int element;
    struct node *ptrtonxtnd;
    struct node *ptrtoprevnd;
};

struct node *head = NULL;

void insatbeg ();
void insatend ();
void insatmid ();
void deletefirst ();
void deletelast ();
void deletemid ();
void showthelinkedlistforwards ();
void showthelinkedlistbackwards ();

int main()
{
    int option = 0;
    printf ("********** Menu **********\n\n");
    printf ("1. Insertion at beginning\n2. Insertion at end\n3. Insertion in between nodes\n");
    printf ("4. Deletion at beginning\n5. Deletion at end\n6. Deletion in between nodes\n");
    printf ("7. Display List forwards\n8. Display List backwards\n9. Exit\n\n**************************\n");

    while (option != 9)
    {
        printf ("\nEnter your choice: ");
        scanf ("%d", &option);
        switch (option)
        {
            case 1: insatbeg ();
                    break;
            case 2: insatend ();
                    break;
            case 3: insatmid ();
                    break;
            case 4: deletefirst ();
                    break;
            case 5: deletelast ();
                    break;
            case 6: deletemid ();
                    break;
            case 7: showthelinkedlistforwards ();
                    break;
            case 8: showthelinkedlistbackwards ();
                    break;
            case 9: exit (0);
                    break;
            default: printf ("\nThis option is wrong !\n");
        }
    }
    return 0;
}

void insatbeg ()
{
    struct node *nwptr = (struct node*) malloc(sizeof(struct node));
    printf ("Enter element to be inserted: ");
    scanf ("%d", &nwptr->element);

    if (head == NULL)
    {
        nwptr->ptrtonxtnd = nwptr;
        nwptr->ptrtoprevnd = nwptr;
        head = nwptr;
    }
    else
    {
        struct node *lastptr = head->ptrtoprevnd;
        nwptr->ptrtonxtnd = head;
        head->ptrtoprevnd = nwptr;
        nwptr->ptrtoprevnd = lastptr;
        lastptr->ptrtonxtnd = nwptr;
        head = nwptr;
    }
    printf ("\nElement inserted at beginning of the list !\n");
}

void insatend ()
{
    struct node *nwptr = (struct node*) malloc(sizeof(struct node));
    printf ("Enter element to be inserted: ");
    scanf ("%d", &nwptr->element);

    if (head == NULL)
    {
        nwptr->ptrtonxtnd = nwptr;
        nwptr->ptrtoprevnd = nwptr;
        head = nwptr;
    }
    else
    {
        struct node *lastptr = head->ptrtoprevnd;
        nwptr->ptrtonxtnd = head;
        head->ptrtoprevnd = nwptr;
        nwptr->ptrtoprevnd = lastptr;
        lastptr->ptrtonxtnd = nwptr;
    }
    printf ("\nElement inserted at end of the list !\n");
}

void insatmid ()
{
    struct node *nwptr = (struct node*) malloc(sizeof(struct node));
    printf ("Enter element to be inserted: ");
    scanf ("%d", &nwptr->element);

    if (head == NULL)
    {
        nwptr->ptrtonxtnd = nwptr;
        nwptr->ptrtoprevnd = nwptr;
        head = nwptr;
        printf ("\nElement inserted normally as list was empty !\n");
        return;
    }
    else
    {
        int a;
        printf ("Enter element after whom insertion will occur: ");
        scanf ("%d", &a);
        struct node *tptr = head;
        while (tptr->element != a)
        {
            tptr = tptr->ptrtonxtnd;
            if (tptr == head)
            {
                printf ("\n%d not present in the list !\n", a);
                return;
            }
        }

        struct node *next_node = tptr->ptrtonxtnd;
        tptr->ptrtonxtnd = nwptr;
        nwptr->ptrtoprevnd = tptr;
        nwptr->ptrtonxtnd = next_node;
        next_node->ptrtoprevnd = nwptr;
    }
    printf ("\nElement inserted after the entered node !\n");
}

void deletefirst ()
{
    if (head == NULL)
    {
        printf ("List is empty ! No element to be deleted.\n");
        return;
    }
    struct node *last_node = head->ptrtoprevnd;
    printf ("\nHead element, %d has been deleted !\n", head->element);

    if (head->ptrtonxtnd == head)
        head = NULL;
    else
    {
        last_node->ptrtonxtnd = head->ptrtonxtnd;
        head->ptrtonxtnd->ptrtoprevnd = last_node;
        head = head->ptrtonxtnd;
    }
}

void deletelast ()
{
    if (head == NULL)
    {
        printf ("List is empty ! No element to be deleted.\n");
        return;
    }
    struct node *prevptr = head->ptrtoprevnd->ptrtoprevnd;
    printf ("\nEnd element, %d has been deleted !\n", head->ptrtoprevnd->element);

    if (head->ptrtonxtnd == head)
        head = NULL;
    else
    {
        prevptr->ptrtonxtnd = head;
        head->ptrtoprevnd = prevptr;
    }
}

void deletemid ()
{
    if (head == NULL)
    {
        printf ("List is empty ! No element to be deleted.\n");
        return;
    }
    int a;
    printf ("Enter the element to be deleted: ");
    scanf ("%d", &a);
    struct node *tptr = head;
    while (tptr->element != a)
    {
        tptr = tptr->ptrtonxtnd;
        if (tptr == head)
        {
            printf ("\n%d not present in the list !\n", a);
            return;
        }
    }

    struct node *prevptr = tptr->ptrtoprevnd;
    printf ("\nGiven element, %d has been deleted !\n", tptr->element);
    if (head->ptrtonxtnd == head)
        head = NULL;
    else
    {
        prevptr->ptrtonxtnd = tptr->ptrtonxtnd;
        tptr->ptrtonxtnd->ptrtoprevnd = prevptr;
        free (tptr);
    }
}

void showthelinkedlistforwards ()
{
    if (head == NULL)
        printf ("List is empty ! No element to be displayed.\n");
    else
    {
        struct node *nwptr = head;
        printf ("\nElements of Circular DLL (in forward direction) :\n-> ");
        do
        {
            printf ("%d -> ", nwptr->element);
            nwptr = nwptr->ptrtonxtnd;
        }
        while (nwptr != head);
        printf("\n");
    }
}

void showthelinkedlistbackwards ()
{
    if (head == NULL)
        printf ("List is empty ! No element to be displayed.\n");
    else
    {
        struct node *nwptr = head->ptrtoprevnd;
        printf ("\nElements of Circular DLL (in backward direction) :\n<- ");
        do
        {
            printf ("%d <- ", nwptr->element);
            nwptr = nwptr->ptrtoprevnd;
        }
        while (nwptr != head->ptrtoprevnd);
        printf("\n");
    }
}
