/******************************************************************************

TO SEARCH AN ELEMENT IN ARRAY

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[100], i, n, ele, flag, pos;
    printf("Enter size of array : ");
    scanf("%d", &n);
    
    printf("Enter elements in array\n");
    for (i=0;i<n;i++){
        printf("array[%d] : ", i);
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to be searched : ");
    scanf("%d", &ele);
    
    for (i=0;i<n;i++){
        if (ele == arr[i]){
            flag=1;
            pos=i+1;
        }
    }
    
    if (flag == 1){
        printf("%d is found at %dth position in array\n", ele, pos);
    }
    else{
        printf("%d is not found in array\n", ele);
    }

    return 0;
}
