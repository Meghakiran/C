#include<stdio.h>
int main(){
int n,i,c;
printf ("enter a numbrer:");
scanf(" %d",&n);
c=0;
for(i=1;i<=n;i++);
{
    if(n%i==0);
    {
        c++;
    }
  }

if(c==2)
{
    printf("the number %d is a prime number",n);
    }
    else{
        printf("the number %d is not a prime number",n);
         }
         return 0;
    }



