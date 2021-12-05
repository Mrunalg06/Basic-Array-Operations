/******************************************************************************

TO FIND THE SECOND LARGEST ELEMENT IN ARRAY

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[] = {90,20,30,100,80,40,50,15};
    int i, n=0, smax=0, temp=0;
    n = sizeof(arr)/sizeof(arr[0]);
    
    printf("Array : ");
    for (i=0;i<n;i++){
        printf("%d  ", arr[i]);
    }
    
    for (int i=1;i<n;i++){
        if(arr[i] > arr[temp]){
            smax = temp;
            temp = i;
        }
        else if(arr[i] != arr[temp]){
            if (arr[i] > arr[smax]){
                smax = i;
            }
        }
    }
    
    printf("\n%d is second largest element in array", arr[smax]);
    printf("\n%d is largest element in array", arr[temp]);

    return 0;
}
