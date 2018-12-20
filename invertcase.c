#include "types.h"
#include "stat.h"
#include "user.h"

char buf[512];

int main(int argc, char *argv[]){
    int i, j;

    for(i=1;i<argc;i++){
        for(j=0;argv[i][j]!='\0';j++){
            if(argv[i][j]>='a' && argv[i][j]<='z')
                buf[j]=argv[i][j]-32;
            else if(argv[i][j]>='A' && argv[i][j]<='Z')
                buf[j]=argv[i][j]+32;
            else
                buf[j]=argv[i][j];
        }
        buf[j]='\0';
        printf(1,"%s ",buf);
    }
    printf(1,"\n");
    exit();
}
