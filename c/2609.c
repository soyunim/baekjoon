#include<stdio.h>

int main(){
    int a, b, num=1, min, max_=0;
    scanf("%d %d", &a, &b);
    min = a<b ? a:b;

    while(num <= min){
        if( a%num==0 && b%num==0){
            max_=num;
        }
        num++;
    }

    printf("%d\n%d", max_, a*b/max_);
    return 0;
}