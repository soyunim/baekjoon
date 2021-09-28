#include<iostream>

using namespace std;

int han_num(int n);

int main(){
    int num;
    cin>>num;
    cout<<han_num(num);
}

int han_num(int n){
    int cnt=0;
    for(int i=1; i<=n; i++){
        if(1<=i && i<100){
            cnt++;
        }
        else if(100<=i && i<1000){
            if(n/100-(n%100)/10 == (n%100)/10-n%10){
                cnt++;
            }
        }
    }
    return cnt;
}