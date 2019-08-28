#include<stdio.h>
int global_arr[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int another_global[10]={-2,-2,-2,-2,-2,-2,-2,-2,-2,-2};
int main(int argc, char **argv)
{
int res,i;
printf("addr 1 %u and addr 2 %u\n",global_arr,another_global);
res=global_arr[10+argc];
for( i=0; i<10; i++)
{ printf("%d and %d\n",global_arr[i],another_global[i]); }
printf("value is %d\n",res);
return 0;
}
