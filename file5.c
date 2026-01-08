#include<stdio.h>
int main(){
    int a,b;
    printf("enter two numbers :");
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("%d is the largest",a);

    }
    else if(b>a){
        printf("%d is the largest",b);


    }
    else {
        printf("Both numbers are equal");
    }
    return 0;
}