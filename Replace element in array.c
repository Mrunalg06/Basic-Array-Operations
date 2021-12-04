/******************************************************************************

REPLACE AN ELEMENT IN AN ARRAY

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[200], i, n, pos, ele, sum=0;
    printf("Enter size of array : ");
    scanf("%d", &n);
    
    printf("Enter elements in array\n");
    for(i=0;i<n;i++){
        printf("array[%d] : ",i);
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the position at which you want to insert an element : ");
    scanf("%d", &pos);
    
    printf("Enter the element to be inserted : ");
    scanf("%d", &ele);
    
    for(i=0;i<n;i++){
        if(i==pos){
            arr[i-1]=ele;
        }
    }
    
    printf("Updated array is : \n");
    for (i=0;i<n;i++){
        printf("%d  ", arr[i]);
    }

    return 0;
}
