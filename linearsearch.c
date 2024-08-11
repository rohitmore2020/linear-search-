#include<stdio.h>
int main(){
    int a[10],found=0;

    for (int i=0;i<10;i++){
    printf("enter the elements");
    scanf("%d",&a[i]);
    }

    int num;
    printf("enter the number to search");
    scanf("%d",&num);

    for(int i=0;i<10;i++){
        if(a[i]==num){
            printf("element is at position %d",i+1);
        }
        break;
        found++;
    }
    if(found==0){
        printf("element is not in array");
    }

 return 0;
}