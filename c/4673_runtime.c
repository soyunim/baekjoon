#include <stdio.h>

int self_n();

int main(){
    self_n();
    return 0;
}

int self_n(){
    int num[10001]={0}, notself=0;
    for(int i=1; i<10001; i++){
        if(i<10){
            notself = i+i;
            num[notself]=1;
        }
        else if(i<100){
            notself=i+i/10+i%10;
            num[notself]=1;
        }
        else if(i<1000){
            notself=i+i/100+(i%100)/10+(i%100)%10;
            num[notself]=1;
        }
        else if(i<10000){
            notself=i+i/1000+(i%1000)/100+((i%1000)%100)/10+((i%1000)%100)%10;
            num[notself]=1;
        }
    }
    for(int i=1; i<10001; i++){
        if(num[i]!=1){
            printf("%d\n",i);
        }
    }
    return 0;
}