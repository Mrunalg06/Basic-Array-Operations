/******************************************************************************

TAKE USER INPUT OF ARRAY AND CALCULATE THE AVERAGE OF ARRAY

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[100], i; 
    float avg=0, sum=0, n;
    printf("Enter the size of array\n");
    scanf("%f", &n);
    
    printf("Enter elements in array\n");
    for (i=0;i<n;i++){
        printf("arr[%d] : ",i);
        scanf("%d", &arr[i]);
    }
    
    printf("Array is : ");
    for(i=0;i<n;i++){
        printf("%d  ", arr[i]);
    }
    
    for(i=0;i<n;i++){
        sum=sum+arr[i];
    }
    
    avg=sum/n;
    printf("\nAverage of array is %f\n", avg);

    return 0;
}
