#include<stdio.h>
int func(int arr[100], int size);
int func1(int arr[100], int size);
int main()
{
    int size,arr[100];
    printf("Enter the size of arr: \n");
    scanf("%d",&size);
    for(int i = 0; i < size; i++)
    {
        printf("Enter the arrays of element: \n");
        scanf("%d",&arr[i]);
    }
    func(arr, size);
    func1(arr, size);
    return 0;
}
int func(int arr[100],int size)
{
    int i,j,temp;
    for(i = 0; i < size; i++)
    {
        temp = arr[i];
        for(j = i-1; j >= 0 && temp < arr[j]; j--)
            arr[j+1] = arr[j];
        arr[j+1] = temp;
    }
}
int func1(arr[100], int size)
{
    printf("Array in accending order:\n");
    for(int i = 0; i < size; i++)
        printf("%d ",arr[i]);
    printf("\n");
    return 0;
}
