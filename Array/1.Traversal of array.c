#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[50],i,size;

    printf("Enter size of array:\n");
    scanf("%d",&size);
    printf("Enter elements on array:\n");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }

    return 0;
}
