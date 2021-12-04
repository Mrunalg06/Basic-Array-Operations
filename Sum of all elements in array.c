/******************************************************************************

FINDING THE SUM OF ALL ELEMENTS IN ARRAY

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[200], i, n, sum=0;
    printf("Enter size of array : ");
    scanf("%d", &n);
    
    printf("Enter elements in array\n");
    for(i=0;i<n;i++){
        printf("array[%d] : ",i);
        scanf("%d", &arr[i]);
    }
    
    for(i=0;i<n;i++){
        sum = sum + arr[i];
    }
    printf("%d\n", sum);

    return 0;
}
