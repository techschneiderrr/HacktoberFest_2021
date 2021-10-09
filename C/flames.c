#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

typedef struct flames
{
    char c;
    struct flames *next, *prev;
}f;

int count_uncommon (char* a, char* b)
{
    int i, j, c = 0, w = 0;
    for (i = 0; i < strlen (a); i++)
    {
        for (j = 0; j < strlen (b); j++)
        {
            if (toupper(a[i]) == toupper(b[j]) && isalpha(a[i]) && isalpha(b[j]))
            {
                c++;
                a[i] = b[j] = '*';
            }
            else if (a[i] == ' ' || b[j] == ' ')
            {
                w++;
                a[i] = b[j] = '*';
            }
        }
    }
    return (strlen(a) + strlen(b) - 2*c - w);
}

void insert (f** head, char ch)
{
    f* new_node = (f*) malloc(sizeof(f));
    new_node->c = ch;
    if (*head == NULL)
    {
        new_node->next = new_node->prev = new_node;
        *head = new_node;
        return;
    }

    f* last_node = (*head)->prev;

    new_node->next = *head;
    (*head)->prev = new_node;
    new_node->prev = last_node;
    last_node->next = new_node;
}

void display (char ch)
{
    printf ("\nTheir relationship is defined as ");
    switch (ch)
    {
        case 'F':   printf ("Friends !\n");
                    break;
        case 'L':   printf ("Love !\n");
                    break;
        case 'A':   printf ("Affection !\n");
                    break;
        case 'M':   printf ("Marriage !\n");
                    break;
        case 'E':   printf ("Enemy !\n");
                    break;
        case 'S':   printf ("Sister !\n");
                    break;
    }
}

void calculate (f** head, int n)
{
    f *curr_node = *head, *prev_node = NULL;
    int c = 1;
    while (c != n)
    {
        prev_node = curr_node;
        curr_node = curr_node->next;
        c++;
    }

    if (curr_node->next == *head && prev_node->next == *head)
    {
        printf ("\nLetter remaining from \"FLAMES\" : %c", (*head)->c);
        display ((*head)->c);

        (*head) = NULL;
        free(curr_node);
        return;
    }

    else if (curr_node == *head)
    {
        prev_node = (*head)->prev;
        *head = (*head)->next;
        prev_node->next = *head;
        (*head)->prev = prev_node;

        (*head) = curr_node->next;
        free(curr_node);
    }

    else if (curr_node->next == *head)
    {
        prev_node->next = *head;
        (*head)->prev = prev_node;

        (*head) = curr_node->next;
        free(curr_node);
    }

    else
    {
        prev_node->next = curr_node->next;
        curr_node->next->prev = prev_node;

        (*head) = curr_node->next;
        free(curr_node);
    }
}

int main ()
{
    f* head_node = NULL;
    char nm1[20], nm2[20], w[6] = "FLAMES";
    int i, nc;
    printf ("**** FLAMES CALCULATOR ****\n\n");
    printf ("Enter the 2 names:\n");
    gets(nm1);    gets(nm2);

    for (i = 0; i < 6; i++)
        insert (&head_node, w[i]);

    nc= count_uncommon(nm1, nm2);
    for (i = 0; i < 6; i++)
    {
        if (head_node == NULL)
            break;
        else
            calculate (&head_node, nc);
    }
    return 0;
}
