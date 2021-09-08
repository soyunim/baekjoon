#include <iostream>
using namespace std;

int main(){
    int num, result;
    int arr[10]={0,};
    int multi=1;

    for(int i=0; i<3; i++){
        cin >> num;
        multi *= num;
    }

    for(int i=0; multi>0; i++){
        result=multi%10;
        arr[result]+=1;
        multi/=10;
    }

    for(int i=0; i<10; i++){
        printf("%d\n",arr[i]);
    }

    return 0;
}