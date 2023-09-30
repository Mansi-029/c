#include<stdio.h>
int main()
{
    int size,arr[size],temp,i,j;
    printf("Enter the size of arr: \n");
    scanf("%d",&size);
    for(i = 0; i < size; i++)
    {
        printf("Enter the arrays of element: \n");
        scanf("%d",&arr[i]);
    }
    for(i = 0; i < size; i++)
    {
        temp = arr[i];
        for(j = i-1; j>=0 && temp<arr[j]; j--)
        {
            arr[j+1] = arr[j];
        }
        arr[j+1] = temp;
    }
    printf("Array in accending order:\n");
    for(i = 0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
