#include<iostream>

using namespace std;

int main(){
    int a, b, c, a1,b1,c1;
    while(1){
        cin >> a >> b >> c;
        if(a==0&&b==0&&c==0){
            break;
        }
        a1=a*a;
        b1=b*b;
        c1=c*c;
        if(a1+b1==c1||a1+c1==b1||b1+c1==a1){
            cout << "right" << '\n';
        }
        else{
            cout << "wrong" << '\n';
        }
    }
}