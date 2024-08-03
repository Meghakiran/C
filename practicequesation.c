#include<stdio.h>
int searchitem(int arr[],int len,int item){
    if(arr[len]=item)
    return len;
    else if(len==-1)
    return-1;
    else
    return searchitem(arr,len-1,item);

}
int main(){
    int arr[]={23,10,46,21,75};
    int index=0;
    int item=0;
    printf("enter item to search:");
    scanf("%d",&item);
    index=searchitem(arr,5,item);
    if(index==-1)
    printf("item not found in the array\n");
    else
    printf("item found in the index %d\n",index);
    return 0;
}