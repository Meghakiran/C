#include<stdio.h>

int sum(int n);

int main(){
    printf("sum is:%d",sum(5));
    return 0;
}
//recursive function
int sum(int n){
    if(n==1){
        return 1;
    }
    int sumNm=sum(n-1); //sum 1to n
    int sumN=sumNm+n;
      return sumN;
}