#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int num[n];
    int min = 1000001;
    int max = -1000001;

    for(int i =0; i<n; i++){
        cin >> num[i];
        if(min > num[i]){
            min = num[i];
        }
        if(max < num[i]){
            max = num[i];
        }
    }

    cout << min << ' ' << max;

    return 0;
}