
#include <stdio.h> 
int main() { 
    int n, i, start; 
    printf("Enter number of blocks: "); 
   scanf("%d", &n); 
    printf("Enter starting block: "); 
   scanf("%d", &start); 
    printf("Linked Allocation:\n"); 
    for(i = 0; i < n; i++) 
       printf("%d -> ", start + i); 
    printf("NULL\n"); 
    return 0; 
} 

 
