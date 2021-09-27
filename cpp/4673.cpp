#include<iostream>

using namespace std;

int self_num(int n){
    int sum=n;
    while(1){
        if(n==0){
            break;
        }
        sum+=n%10;
        n=n/10;
    }
    return sum;
}

int main(){
    int self_n[10001]={0}, check;

    for(int i=1; i<10001; i++){
        check=self_num(i);
        if(check < 10001){
            self_n[check]=1;
        }
    }

    for(int i=1; i<10001; i++){
        if(self_n[i]!=1){
            cout << i << '\n';
        }
    }
    return 0;
}