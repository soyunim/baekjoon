#include<iostream>

using namespace std;

int main(){
    char s[100]={};
    cin>>s;
    for(int i=97; i<=122;i++){
        int j=0;
        while(s[j]!=0){
            if(s[j]==(char)i){
                cout << j << " ";
                break;
            }
            j++;
        }
        if(s[j]!=(char)i){
            cout << "-1 ";
        }
    }
}