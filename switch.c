#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);
    switch (age)
    {
    case3:
printf("the age is 3");
        break;
    case 13:
    printf("the age is 13");
    break;
case 23:
printf("the age is 23");
break;

    default:
    printf("age is not 3,13 or 23");
        break;
    }
    return 0;
}