#include <stdio.h>

int main(){
    int n;
    scanf("%d\n",&n);
    double max=0.0, result=0.0, ave=0.0;
    double sub[1000];
    for(int i=0; i<n; i++){
        scanf("%d ", &sub[i]);
        if(max<sub[i]){
            max=sub[i];
        }
    }

    for(int i=0; i<n; i++){
        sub[i]=(sub[i]/max)*100;
        ave += sub[i];
    }

    result= ave/n;

    printf("%0.2lf", result);
    return 0;
}