/******************************************************************************

TO REMOVE DUPLICATE ELEMENT PRESENT IN ARRAY

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i, j, n, ele, flag, pos;
    int arr[] = {10, 20, 30, 40, 50, 10};
    n = sizeof(arr)/sizeof(arr[0]);
    printf("Array : ");
    for(i=0;i<n;i++){
        printf("%d  ", arr[i]);
    }
    
    for (i=0;i<n;i++){
        for (j=i+1;j<n;j++){
            if (arr[i] == arr[j]){
                flag = 1;
                ele = arr[i];
                pos = j;
            }
        }
    }
    
    for (i=0;i<n;i++){
        if(i==pos){
            arr[i]=arr[i+1];
        }
    }
    
    for(i=pos;i<n;i++){
        arr[i]=arr[i+1];
    }
    
    n--;
    
    if (flag == 1){
        printf("\n%d is a duplicate element in array", ele);
    }
    else{
        printf("\nThere is no duplicate element in array");
    }
    
    printf("\nUpdates array is : ");
    for (i=0;i<n;i++){
        printf("%d  ", arr[i]);
    }

    return 0;
}
