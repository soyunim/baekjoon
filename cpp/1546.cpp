#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    double max=0.0, result=0.0, ave=0.0;
    double sub[1000]={0,};

    for(int i=0; i<n; i++){
        cin>>sub[i];
        if(max<sub[i]){
            max=sub[i];
        }
    }

    for(int i=0; i<n; i++){
        sub[i]=(sub[i]/max)*100;
        ave+=sub[i];
    }

    result=ave/n;

    cout<<result;
    return 0;
}