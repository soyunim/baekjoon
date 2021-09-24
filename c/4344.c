#include<stdio.h>

int main(){
    int c, n, sum=0, ave=0, cnt=0;
    int score[n];

    scanf("%d",&c);
    for(int i=0; i<c; i++){
        scanf("%d",&n);
        for(int j=0; j<n; j++){
            scanf("%d",score[j]);
            sum+=score[j];
        }
        ave=sum/n;
        for(int j=0; j<n; j++){
            if(ave<score[j]){
                cnt++;
            }
        }
        ave=cnt/n*100*1000/1000;
        printf("%f",ave);
    }
}