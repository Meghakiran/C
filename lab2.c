#include<stdio.h>
int main(){
    long int n,i,t=9;
    int sum =0;
    clrscr ();
    printf("input the number of terms");
    scanf("%1d",&n);
    for(i=1;i<=n;i++){
        sum+=t;
        t=t*10+9;
}
printf("\n the sum of the series%d",sum);

}