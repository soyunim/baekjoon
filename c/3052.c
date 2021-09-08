#include <stdio.h>

int main(){
    int num[10];
    int result =0;

    for(int i=0; i<10; i++){
        scanf("%d\n",&num[i]);
        num[i] %= 42;
    }

    for(int i=0; i<10; i++){
        int cnt=0;
        for(int j=0; j<i; j++){
            if(num[i] == num[j]){
                cnt++;
            }
        }
        if(cnt ==0){
            result++;
        }
    }
    printf("%d", result);
}
