#include<stdio.h>
    #include<string.h>

void printstring(char arr[]);
int countlength(char arr[]);

int main(){
    char firststr[100]="hello";
    char secstring[]="world";
    strcat(firststr,secstring);
    puts(firststr);
}