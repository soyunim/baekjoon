#include <stdio.h>

int main(){
    int n;
    int max = -1000001;
    int min = 1000001;
    scanf("%d",&n);

    int num[n];
    for (int i=0; i<n; i++){
        scanf("%d ",num+i);
        if(num[i] > max) max = num[i];
        if(num[i] < min) min = num[i];
    }

    printf("%d %d", min, max);
}