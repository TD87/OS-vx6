#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[]){
    int pid1, pid2, pid3, pid4;
    if((pid1 = fork()) == 0){
        int i,sum=0;
        set_priority(0);
        // sleep(200);
        for(i=0;i<1000000000;i++)
            sum+=i;
        printf(1,"%d\n",sum);
        exit_modified();
    }
    else{
        if((pid2 = fork()) == 0){
            int i,sum=0;
            set_priority(10);
            // sleep(200);
            for(i=0;i<1000000000;i++)
                sum+=i;
            printf(1,"%d\n",sum);
            exit_modified();
        }
        else{
            if((pid3 = fork()) == 0){
                int i,sum=0;
                set_priority(20);
                // sleep(200);
                for(i=0;i<1000000000;i++)
                    sum+=i;
                printf(1,"%d\n",sum);
                exit_modified();
            }
            else{
                if((pid4 = fork()) == 0){
                    int i,sum=0;
                    set_priority(30);
                    // sleep(200);
                    for(i=0;i<1000000000;i++)
                        sum+=i;
                    printf(1,"%d\n",sum);
                    exit_modified();
                }
                else{
                    wait();
                    wait();
                    wait();
                    wait();
                }
            }
        }
    }
    exit();
}
