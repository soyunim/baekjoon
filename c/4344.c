#include<stdio.h>

int main(){
    int c, n, sum=0, ave=0, cnt=0;
    int score[1000]={};
    double average;

    scanf("%d",&c);
    for(int i=0; i<c; i++){
        scanf("%d",&n);
        for(int j=0; j<n; j++){
            scanf("%d",&score[j]);
            sum+=score[j];
        }
        ave=sum/n;
        for(int j=0; j<n; j++){
            if(ave<score[j]){
                cnt++;
            }
        }
        average=(double)cnt/n*100;
        printf("%.3f%%\n",average);
        sum=0;
        ave=0;
        cnt=0;
    }
    return 0;
}
