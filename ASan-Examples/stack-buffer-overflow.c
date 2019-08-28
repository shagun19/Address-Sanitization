#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char** argv)
{
char buff[15]; //reserved space for passwd
int flag=0;
printf("Enter the password\n");
strcpy(buff,argv[1]);
if(strcmp(buff, "shagun@1234"))
{printf("Wrong password\n");}
else
{printf("Correct password\n"); flag=1;}
if(flag)
{
printf("------------------------------\n");
printf("You get ADMIN priveledges\n");
printf("------------------------------\n");
system("ls -lrt");
//perform any potentially critical instruction
}
return 0;
}
