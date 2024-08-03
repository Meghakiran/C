#include<stdio.h>
int main(){
    double number,i,sum=0;
    printf("Enter the number");
    scanf("%f",&number);
    for(i =1;i<=number; i++);
{
    sum=sum+(1/i);
if(i==1)
printf("\n 1+");
else if(i== number)
printf("1+%if+",i);
}
printf("the sum of the given is %if",sum);
getch();
}
