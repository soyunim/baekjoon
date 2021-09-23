#include <iostream>

using namespace std;

int main(){
    int c, n, average, sum=0, ave=0, cnt=0;
    int score[n]={0,};
    cin >> c;
    for(int i=0; i<c; i++){
        cin >> n;
        for(int j=0; j<n; j++){
            cin >> score[j];
            sum += score[j];
        }
        ave=sum/n;
        for(int k=0; k<n; k++){
            if(score[k]>ave){
                cnt++;
            }
        }
        average=cnt/n*100;

        cout << average << '%' <<'\n';
        ave=0;
        sum=0;
        cnt=0;
    }
    return 0;
}