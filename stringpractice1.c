#include<stdio.h>
void printstring(char arr[]);
int main(){
    char firstname[] ="shradha";
    char lastname[]="khapra";

    printstring(firstname);
    printstring(lastname);
    return 0;
}
void printstring(char  arr[]){
    for(int i=0;arr[i] !='\0';i++){
        print("%c",arr[i]);
    }
    printf("\n");
}