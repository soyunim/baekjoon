#include <stdio.h>
#include <string.h>

int main(){
    int n, sum, score;
    char arr[80]={0,};
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        sum = 0;
        score = 1;
        scanf("%s", arr);

        for(int j=0; j<strlen(arr); j++){
            if(arr[j]=='O'){
                sum+=score;
                score++;
            }
            else{
                score=1;
            }
        }
        printf("%d\n",sum);
    }
}