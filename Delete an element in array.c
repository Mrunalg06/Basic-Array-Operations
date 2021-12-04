/******************************************************************************

DELETE AN ELEMENT IN ARRAY 

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
    
    printf("Enter the element to be deleted : ");
    scanf("%d", &ele);      //input of element to be deleted
    
    for(i=0;i<n;i++){
        if (arr[i]==ele){
            pos=i;
        }
    }
    
    for(i=0;i<n;i++){
        if(i == pos){
            arr[i]=arr[i+1];        // replace the deleted element
        }
    }
    
    for(i=pos;i<n;i++){
        arr[i]=arr[i+1];        //shift the elements 1 step backward
    }
    
    n--;        // reduce the size of array by 1
    
    printf("Updated array is : \n");
    for (i=0;i<n;i++){
        printf("%d  ", arr[i]);
    }

    return 0;
}
