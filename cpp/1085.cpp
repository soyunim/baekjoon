#include<iostream>

using namespace std;

int main(){
    int x, y, w, h, min=1001;
    cin >> x >> y >> w >> h;
    w=w-x;
    h=h-y;

    min=x;
    if(min>w){
        min=w;
    }
    if(min>y){
        min=y;
    }
    if(min>h){
        min=h;
    }
    cout << min;
}