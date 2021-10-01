#include<stdio.h>
int main(){
    int a, b, v, sum=0, cnt=0;
    scanf("%d %d %d", &a, &b, &v);

    while(v>sum){
        sum+=a;
        cnt++;
        if(v<=sum){
            break;
        }        
        sum-=b;
    }

    printf("%d", cnt);
}