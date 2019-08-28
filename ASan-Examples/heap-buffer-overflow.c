#include<stdio.h>
#include<stdlib.h>
int main()
{
int *ptr1=(int *)malloc(10*sizeof(int));
int *ptr2=(int *)malloc(10*sizeof(int));
printf("Addr 1: %u and Addr 2: %u\n",ptr1,ptr2);
int i;
for (i=0;i<15;i++)
{
ptr1[i]=i+1;
ptr2[i]=(i+1)*(i+1);}
for (i=0;i<15;i++)
printf("Run %d - val from arr1: %d and val from arr2: %d\n",i+1,ptr1[i],ptr2[i]);
return 0;
}
