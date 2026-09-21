P8:
#include <stdio.h> 
int main() { 
    int total, allocated; 
    printf("Enter total devices: "); 
    scanf("%d", &total); 
    printf("Enter devices to allocate: "); 
   scanf("%d", &allocated); 
    if(allocated <= total) { 
        total -= allocated; 
        printf("Allocated Successfully\n"); 
        printf("Available Devices = %d\n", total); 
        printf("Deallocating...\n"); 
        total += allocated; 
        printf("Available Devices = %d\n", total); 
    } 
    else 
       printf("Allocation Failed\n"); 
    return 0; 
} 

 
