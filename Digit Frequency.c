#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char input[1001];
    int total[]={0,0,0,0,0,0,0,0,0,0};
    scanf("%s",input);
    for(int i=0;i<strlen(input);i++){
        if(isdigit(input[i])){
            total[input[i]-48]+=1;}          
    }
    for(int i=0;i<10;i++){
        printf("%d ",total[i]);
    }

     
    return 0;
}
