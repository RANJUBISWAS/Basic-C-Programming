#include<stdio.h>
#include<stdlib.h>

void main(){
    int a[3] = {0,1};
    int i,count =0;
    scanf("%d",&i);
    if(i == 1)printf("%d",a[0]);
    else if(i == 2) printf("%d\t%d",a[0],a[1]);
    else{
        printf("%d\t%d",a[0],a[1]);
        while(count < i){
            a[2] = a[0] +a[1];
            a[0] = a[1];
            a[1] = a[2];
            printf("\t%d",a[2]);
            count++;
        }
    }
}
