#include <stdio.h>
#include <string.h>
int l2;

void lcs_print (char *x, int m, int n, int (*c)[l2+1])
{       
    if (m == 0 || n == 0)
        return;
    
    if (c[m][n] == c[m-1][n]) 
        lcs_print (x, m-1, n, c);        
    else if (c[m][n] == c[m][n-1]) 
        lcs_print (x, m, n-1, c);        
    else 
    {          
        lcs_print (x, m-1, n-1, c);
        printf ("%c", x[m-1]); 
    }    
}

void lcs_length (char *x, char *y)
{
    int m, n, i, j;
    m = strlen (x);
    n = strlen (y);
    l2 = n;
    int c[m+1][n+1];

    printf ("\nLCS Table:\n\n");
    for (i = 0; i <= m; i++)
    {
        for (j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                c[i][j] = 0;
            else if (x[i-1] == y[j-1])
                c[i][j] = c[i-1][j-1] + 1;
            else
                c[i][j] = c[i][j-1] > c[i-1][j] ? c[i][j-1] : c[i-1][j];       

            printf("%d\t", c[i][j]);       
        }
        printf("\n");
    }
    
    if (c[m][n] == 0)
        printf ("\nNo Longest Common Subsequence for these 2 strings !\n");
    else
    {
        printf ("\nLongest Common Subsequence of these 2 strings is ");
        lcs_print (x, m, n, c);  
        printf ("\nLength of the LCS = %d\n", c[m][n]); 
    }         
}

int main ()
{
    char s1[20], s2[20];
    printf ("Enter 2 strings: ");
    fflush (stdin);
    scanf ("%s %s", s1, s2);
    lcs_length(s1, s2);

    return 0;
}