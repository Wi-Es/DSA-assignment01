#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(){
     char *num=(char*)malloc(1000000*sizeof(char));
    scanf("%s",num);
    int n = strlen(num);
    // printf("%s %d", num, n);
    int dots = 0;
    int flag = 0;
    for (int i = 0; i < n;i++){
        if(num[i]=='.'){
            dots++;
        }
        else if(num[i]<'0' || num[i]>'9' ){
            flag = 1;
            break;
        }
    }
    if(dots>1 || num[n-1]=='.'){
        printf("invalid");
    }
    else {
        printf("valid");
    }
        return 0;
}