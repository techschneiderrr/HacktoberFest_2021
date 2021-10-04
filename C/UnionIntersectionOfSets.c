#include <stdio.h>
#include <conio.h>

void main() {
    int a[100], b[100], un[200], in[100];
    int n, m, i, j, k = 0, ct = 0;
    printf("Enter the size of set A and set B: ");
    scanf("%d%d", &n, &m);
    printf("Enter the elements in set A: ");
    for(i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    printf("Enter the elements in set B: ");
    for(i = 0; i < m; ++i)
        scanf("%d", &b[i]);
    
    // Logic for intersection
    k = 0;
    for(i = 0; i < n; ++i) {
        for(j = 0; j < m; ++j) {
            if(a[i] == b[j]) {
                in[k] = a[i];
                k++;
            }
        }
    }
    printf("\nIntersection of both sets are:\n");
    for(i = 0; i < k; ++i)
        printf("%d ", in[i]);
        
    // Logic for union
    k = 0;
    for(i = 0; i < n; ++i) 
        un[i] = a[i];
    k = n;
    for(i = 0; i < m; ++i) {
        for(j = 0; j < n; ++j) {
            if(b[i] == a[j]) {
                ct++;
                break;
            }
        }
        if(ct == 0) {
            un[k] = b[i];
            k++;
        }
        ct = 0;
    }
    printf("\nUnion of both sets are:\n");
    for(i = 0; i < k; ++i)
        printf("%d ", un[i]);
        
    getch();
}

