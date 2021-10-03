#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char name[20];
int c_score, p_score;

int GenerateRandom()
{
    srand(time(NULL));
    return rand() % 3;
}

void wordChoosenByUser(int choice)
{
    switch (choice)
    {
    case 0:
        printf("\n%s's Choice: Stone", name);
    break;

    case 1:
        printf("\n%s's Choice: Paper", name);
    break;

    case 2:
        printf("\n%s's Choice: Scissor", name);
    break;

    default:
        printf("Wrong Choice");
    }
}

void wordChoosenByComp(int compChoice)
{
    switch (compChoice)
    {
    case 0:
        printf("\nComputer's Choice: Stone");
    break;

    case 1:
        printf("\nComputer's Choice Paper");
    break;

    case 2:
        printf("\nComputer's Choice Scissor");
    break;

    default:
        printf("Wrong Choice");
    }
}

void comp(int choice)
{
    int compChoice;
    compChoice = GenerateRandom();

    wordChoosenByUser(choice);
    wordChoosenByComp(compChoice);

    switch (choice)
    {
    case 0:
        if (compChoice == 2)
        {
            p_score++;
            printf("\n%s's score: %d\tComputer's score: %d\n\n", name, p_score, c_score);
        }
        else if (compChoice == 1)
        {
            c_score++;
            printf("\n%s's score: %d\tComputer's score: %d\n\n", name, p_score, c_score);
        }
        else if (compChoice == 0)
        {
            printf("\n%s's score: %d\tComputer's score: %d\n\n", name, p_score, c_score);
        }
    break;

    case 1:
        if (compChoice == 0)
        {
            p_score++;
            printf("\n%s's score: %d\tComputer's score: %d\n\n", name, p_score, c_score);
        }
        else if (compChoice == 2)
        {
            c_score++;
            printf("\n%s's score: %d\tComputer's score: %d\n\n", name, p_score, c_score);
        }
        else if (compChoice == 1)
        {
            printf("\n%s's score: %d\tComputer's score: %d\n\n", name, p_score, c_score);
        }
    break;

    case 2:
        if (compChoice == 1)
        {
            p_score++;
            printf("\n%s's score: %d\tComputer's score: %d\n\n", name, p_score, c_score);
        }
        else if (compChoice == 0)
        {
            c_score++;
            printf("\n%s's score: %d\tComputer's score: %d\n\n", name, p_score, c_score);
        }
        else if (compChoice == 2)
        {
            printf("\n%s's score: %d\tComputer's score: %d\n\n", name, p_score, c_score);
        }
    break;

    default:
        printf("Wrong Choice");
    }
}

void rules()
{
    printf("Rules Of The Game:-\n\n");
    printf("1. Stone vs Scissor - Rock Wins\n");
    printf("2. Paper vs Stone - Paper Wins\n");
    printf("3. Scissor vs Paper - Scissor Wins\n\n");
}

void more_rules()
{
    printf("\nPress => 0 for Stone\n");
    printf("Press => 1 for Paper\n");
    printf("Press => 2 for Scissor\n\n");
}

void main(void)
{
    int choice,n;
    printf("\t~~ Stone, Paper, and Scissors Game ~~\n\n");

    rules();

    printf("Enter your name: ");
    scanf("%[^\n]%*c", name);

    printf("\nHow many times you want to play: ");
    scanf("%d", &n);

    more_rules();

    for (int i = 0; i < n; i++)
    {
        printf("\n%s's Turn: ", name);
        re:
        scanf("%d", &choice);
        if(choice < 3 && choice >= 0)
            comp(choice);
        else {
            printf("Wrong Choice\n\n%s's Turn: ", name);
            goto re;
        }
    }
    if (p_score > c_score)
    {
        printf("\n%s Won\n", name);
    }
    else if (p_score < c_score)
    {
        printf("\nComputer Won\n");
    }
    else
    {
        printf("\nMatch Drawn\n");
    }
}
