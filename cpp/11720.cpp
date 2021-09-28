#include<iostream>

using namespace std;

int main(){
    int n, sum=0;
    char num[101];
    cin >> n;
    for(int i=0; i<n; i++){
        cin>>num;
        sum+=num-48;
    }
    cout<<sum;
}