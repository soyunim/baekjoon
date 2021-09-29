#include<iostream>

using namespace std;

int main(){
    int n, temp, a, sum=0;
    cin >> n;
    temp=n;
    while(temp>0){
        a=temp%10;
        sum+=a;
        temp/=10;
    }

    for(int i=0; i<=1000001; i++){
        if(sum==n){
            printf("%d",i+sum);
        }
        else{
            printf(0);
        }
    }

    cout << n << endl << sum << endl;
}