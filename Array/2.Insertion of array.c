#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[50],i,num,size,pos;

    printf("Enter size of array:\n");
    scanf("%d",&size);
    printf("Enter elements on array:\n");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the position to insert:\n");
    scanf("%d",&pos);
     printf("Enter data to insert:\n");
    scanf("%d",&num);
    for(i=size-1;i>=pos-1;i--)
        a[i+1]=a[i];

    a[pos-1]=num;
    size++;


    printf("The array is:\n");
        for(i=0;i<=size;i++)
            printf("%d\n",a[i]);





    return 0;
}
