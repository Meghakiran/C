#include<stdio.h>
int main(){
    int n;
    printf("enter marks");
    scanf("%d",&n);
    if(n<40){
 printf("fail");}
else if(n>=40 &&n<=49){
printf("your grade D");
}
else if(n>=50 &&n<=59){
printf ("your grade is c");
}
else if(n>=60 &&n<=69){
printf("ypur grade is b");
}
else if(n>=70 &&n<=79){
    printf("your grade is a");
}
else if(n>=80 &&n<=89){
    printf("your grade is e");
}
else if(n>=90 &&n<=100){
printf("your grade is o");
}
return 0;
}