#include<iostream>

using namespace std; 

int main(){
    int num[8]={};
    int asc=1, des=1;
    for(int i=0; i<8; i++){
        cin >> num[i];
    }
    for(int i=0; i<7; i++){
        if(num[i]+1==num[i+1]){
            asc++;
        }
        else if(num[i]-1==num[i+1]){
            des++;
        }
    }
    
    if(asc==8){
        cout << "ascending";
    }
    else if(des==8){
        cout << "descending";
    }
    else{
        cout << "mixed";
    }
}