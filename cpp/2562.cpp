#include <iostream>
using namespace std;

int main(){
    int num[9];
    int max=0, cnt=0, cnt_t=0;

    for(int i=0; i<9; i++){
        cin >> num[i];
        cnt++;

        if(max<num[i]){
            max=num[i];
            cnt_t=cnt;
        }
    }

    cout << max << '\n' << cnt_t;
}