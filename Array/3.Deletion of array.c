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

    printf("Enter the position to delete:\n");
    scanf("%d",&pos);

    if(pos<=o||pos>size){
        printf("Invalid position\n");
    }

    for(i=pos-1;i<size;i++)
        a[i]=a[i+1];


    size--;


    printf("The array is:\n");
        for(i=0;i<=size;i++)
            printf("%d\n",a[i]);





    return 0;
}
