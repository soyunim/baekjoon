#include<stdio.h>

int main(){
    int n, num;
    int cnt[10001]={0};
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &num);
        cnt[num]++;
    }

    for(int i=1; i<=10000; i++){
        for(int j=0; j<cnt[i]; j++){
            printf("%d\n", i);
        }
    }
    return 0;
}