/******************************************************************************

FINDING THE LARGEST ELEMENT IN ARRAY

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[200], i, n;
    printf("Enter size of array : ");
    scanf("%d", &n);
    
    printf("Enter elements in array\n");
    for(i=0;i<n;i++){
        printf("array[%d] : ",i);
        scanf("%d", &arr[i]);
    }

    int temp=0;
    
    for(i=1;i<n;i++){
        if(arr[temp] < arr[i]){
            temp = i;
        }
    }
    printf("%d\n", arr[temp]);

    return 0;
}
