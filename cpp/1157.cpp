#include <iostream>
#include <string>

using namespace std;

int main(){
    string word;
    int alphabet[26]={};
    int max=0, max_index=0;
    cin>>word;
    for(int i=0; i<word.length(); i++){
        if(word[i]<97){
            word[i]+=32;
        }
        alphabet[word[i]-97]++;
    }
    for(int k=0; k<26; k++){
        if(max<alphabet[k]){
            max=alphabet[k];
            max_index=k;
        }
        else if(max==alphabet[k] && alphabet[k]!=0){
            max_index=-1;
        }
    }

    if(max_index!=-1){
        cout<< (char)(65+max_index);
    }
    else{
        cout << '?';
    }
    return 0;
}