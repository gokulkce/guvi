#include<stdio.h>
int main()
{
int num,count=0;
scanf("%d",&num);
while(num)
{
num=num/10;
count++;
}
printf("Total Digits :%d",count);
return 0;
}
