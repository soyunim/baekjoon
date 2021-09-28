#include <stdio.h>
#include <string.h>

int main(){
    char word[1000001]={};
    int alphabet[26]={};
    int max=0, max_index=0;
    scanf("%s",word);
    for(int i=0; i<strlen(word); i++){
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
        printf("%c",65+max_index);
    }
    else{
        printf("?");
    }
}