#include<stdio.h>

int main(){
    char s[100]={};
    scanf("%s", &s);
    for(int i=97; i<=122;i++){
        int j=0;
        while(s[j]!=0){
            if(s[j]==(char)i){
                printf("%d ", j);
                break;
            }
            j++;
        }
        if(s[j]!=(char)i){
            printf("-1 ");
        }
    }
}