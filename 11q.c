#include<stdio.h>
int main()
{
    int n1,n2,i,j,count=0;
    printf("Enter the number of elements in the sequence one:");
    scanf("%d",&n1);
    printf("Enter the number of elements in the sequence two:");
    scanf("%d",&n2);
    int a[n1],b[n2];
    printf("Enter the sequence one elements:");
    for(i=0;i<n1;i++){
        printf("\nEnter the element %d",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter the sequence two elements:");
    for(i=0;i<n2;i++){
        printf("\nEnter the element %d",i+1);
        scanf("%d",&b[i]);
    }   
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            if(a[i]==b[j]){
                printf("%d ",a[i]);    
                count+=1; 
                break;
            }
        }
    }
    if(count==0){
        printf("  ");
    }
    return 0;
}
/*
#include <stdio.h>
#include <stdbool.h>

// Define a maximum size for the arrays
#define MAX_SIZE 100

// Function to check if an element is in the set
bool isInSet(int set[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (set[i] == element) {
            return true;
        }
    }
    return false;
}

int main() {
    int n1, n2, i;
    printf("Enter the number of elements in sequence one: ");
    scanf("%d", &n1);
    printf("Enter the number of elements in sequence two: ");
    scanf("%d", &n2);

    int a[MAX_SIZE], b[MAX_SIZE];
    
    if (n1 > MAX_SIZE || n2 > MAX_SIZE) {
        printf("Error: Input size exceeds the maximum allowed size.\n");
        return 1;
    }

    printf("Enter the sequence one elements:\n");
    for (i = 0; i < n1; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Enter the sequence two elements:\n");
    for (i = 0; i < n2; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &b[i]);
    }

    int commonSet[MAX_SIZE];
    int commonCount = 0;

    // Create a hash set from sequence one
    for (i = 0; i < n1; i++) {
        if (isInSet(commonSet, commonCount, a[i])) {
            continue;  // Skip duplicates
        }
        
        if (isInSet(b, n2, a[i])) {
            commonSet[commonCount] = a[i];
            commonCount++;
        }
    }

    if (commonCount == 0) {
        printf("No common elements found.\n");
    } else {
        printf("Common elements: ");
        for (i = 0; i < commonCount; i++) {
            printf("%d ", commonSet[i]);
        }
        printf("\n");
    }

    return 0;
}

*/