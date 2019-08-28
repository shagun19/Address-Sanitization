#include<stdio.h>
#include<stdlib.h>
int main()
{
int *ptr=(int *)malloc(100*sizeof(int));
int i ;
for (i=0;i<100;i++)
ptr[i]=i;
free(ptr); //pointer is dangling pointer now
int idx;
printf("enter the index to retrieve\n");
scanf("%d",&idx);
printf("Value is: %d\n",ptr[idx]); // access to a wild pointer now
return 0;
}
