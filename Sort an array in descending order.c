/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[100], i, j, n, temp=0;
    printf("Enter Size of array : ");
    scanf("%d", &n);
    
    printf("Enter elements in array : \n");
    for(i=0;i<n;i++){
        printf("array[%d] : ", i);
        scanf("%d", &arr[i]);
    }
    
    for (i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i] < arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    printf("Sorted array is : ");
    for (i=0;i<n;i++){
        printf("%d\t", arr[i]);
    }

    return 0;
}
