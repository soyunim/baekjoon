#include<stdio.h>

int main(){
    int num[8]={};
    int asc=1, des=1;
    for(int i=0; i<8; i++){
        scanf("%d", &num[i]);
    }
    for(int i=0; i<7; i++){
        if(num[i]+1==num[i+1]){
            asc++;
        }
        else if(num[i]-1==num[i+1]){
            des++;
        }
    }
    
    if(asc==8){
        printf("ascending");
    }
    else if(des==8){
        printf("descending");
    }
    else{
        printf("mixed");
    }
}