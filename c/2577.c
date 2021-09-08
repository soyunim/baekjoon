#include <stdio.h>

int main(){
    int num;
    int multi = 1;
    int result;
    int arr[10]={0,};

    for(int i=0; i<3; i++){
        scanf("%d",&num);

        multi *= num;
    }

    for(int i=0; multi>0; i++){
        result = multi % 10; //1의 자리가 뭔지 알 수 있음
        arr[result]+=1; 
        multi/=10;
    }

    for(int i=0; i<10; i++){
        printf("%d\n", arr[i]);
    }

}