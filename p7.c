p7:
#include <stdio.h> 
int main() { 
    int alloc[10], req[10], avail[10]; 
    int n, i; 
    printf("Enter number of processes: "); 
    scanf("%d", &n); 
    printf("Enter Allocation:\n"); 
    for(i = 0; i < n; i++) 
        scanf("%d", &alloc[i]); 
    printf("Enter Request:\n"); 
    for(i = 0; i < n; i++) 
       scanf("%d", &req[i]); 
    printf("Enter Available Resource: "); 
    scanf("%d", &avail[0]); 
    for(i = 0; i < n; i++) { 
        if(req[i] > avail[0]) { 
            printf("Deadlock Detected\n"); 

            return 0; 
        } 
        avail[0] += alloc[i]; 
    } 
    printf("No Deadlock\n"); 
    return 0; 
} 


 
