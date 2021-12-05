/******************************************************************************

TO CHECK IF DUPLICATE ELEMENT IS PRESENT IN ARRAY OR NOT

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i, j, n, ele, flag, pos;
    int arr[] = {10, 20, 30, 40, 50, 30};
    n = sizeof(arr)/sizeof(arr[0]);
    printf("Array : ");
    for(i=0;i<n;i++){
        printf("%d  ", arr[i]);
    }
    
    for (i=0;i<n;i++){
        for (j=i+1;j<n;j++){
            if (arr[i] == arr[j]){
                flag=1;
                ele=arr[i];
            }
        }
    }
    
    if (flag == 1){
        printf("\n%d is a duplicate element in array\n", ele);
    }
    else{
        printf("\nThere is no duplicate element in array\n");
    }

    return 0;
}
