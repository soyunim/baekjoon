#include <stdio.h>

int main(){
    int num[9];
    int cnt=0, cnt_t=0, max=0;

    for(int i=0; i<9; i++){
        scanf("%d\n", &num[i]);
        cnt++;
        
        if(max < num[i]){
            max = num[i];
            cnt_t=cnt;
        }
    }

    printf("%d\n%d",max,cnt_t);
}