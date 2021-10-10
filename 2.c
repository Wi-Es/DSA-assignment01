#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(){
     char *address=(char*)malloc(1000000*sizeof(char));
    scanf("%s",address);
    int n = strlen(address);
    int local = 0;
    int count = 0;
    for (int i = 0; i < n;i++){
        if(address[i]=='@'){
            local = i;
            count++;
        }
    }

    if(local>=64 || n-local>=255 || count!=1){
        printf("invalid");
    }
    else {
        int flag = 0;
        for (int i = 0; i < local-1;i++){
            if((address[i]>='A' && address[i]<='Z')||(address[i]>='a' && address[i]<='z') ||address[i]=='!'||address[i]=='#'||address[i]=='$'||address[i]=='%'||address[i]=='&'||address[i]=='*'||address[i]=='+'||address[i]=='-'||address[i]=='/'||address[i]=='='||address[i]=='?'||address[i]=='^'||address[i]=='_'||address[i]=='`'||address[i]=='{'||address[i]=='|'||address[i]=='}'||address[i]=='~'){
                continue;
            }
            else {
                flag = 1;
                break;
            }
        }
        int dotCnt = 0;
        for (int i = local + 1; i < n;i++){
            if(address[i]=='.'){
                dotCnt++;
                if(dotCnt>1){
                    flag = 1;
                    break;
                }
                continue;
            }
            if((address[i]>='A' && address[i]<='Z')||(address[i]>='a' && address[i]<='z') ||address[i]=='-'){
                continue;
            }

            else {
                flag = 1;
            }
        }
        if(flag || address[local-1]=='!'||address[local-1]=='#'||address[local-1]=='$'||address[local-1]=='%'||address[local-1]=='&'||address[local-1]=='*'||address[local-1]=='+'||address[local-1]=='-'||address[local-1]=='/'||address[local-1]=='='||address[local-1]=='?'||address[local-1]=='^'||address[local-1]=='_'||address[local-1]=='`'||address[local-1]=='{'||address[local-1]=='|'||address[local-1]=='}'||address[local-1]=='~'||address[local+1]=='-'||address[n-1]=='-'){
            printf("invalid");
        }
        else {
            printf("valid");
        }
    }
        return 0;
}