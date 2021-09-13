#include <iostream>
#include <string>

using namespace std;

int main(){
    int n, sum, score;
    char arr[80]={0,};
    cin >> n;

    for(int i=0; i<n; i++){
        sum = 0;
        score =1;
        cin >> arr;

        for(int j=0; j<80; j++){
            if(arr[j]=='O'){
                sum+=score;
                score++;
            }
            else if(arr[j]=='X'){
                score =1;
            }
        }

        cout << sum << endl;
        
    }
}