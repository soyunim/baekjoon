#include<iostream>

using namespace std;

int main(){
    int n, temp, num;
    cin >> n;

    for(int i=1; i<n; i++){
        temp = i;
        num = i;
        while(temp>0){
            num+=temp%10;
            temp/=10;
        }

        if(num == n){
            cout << i;
            n=0;
            break;
        }
    }
    if( n!= 0){
        cout << 0;
    }

}