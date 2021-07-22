#include <cs50.h>
#include<stdio.h>

int main(void)

 {
int h = get_int("Heihgt:\n");
int i, k, j;
    for (i = h-1; i >= 0; --i) 
        {
            for (j = 0; j < i; ++j) printf(" ");
            for (k = 0; k < h+1 - i; ++k) printf("#");
            printf("\n");
        }
    return 0;
 }
