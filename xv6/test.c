//
// Created by Bao Lam on 4/26/2021.
//

#include "user.h"
#include "stat.h"
#include "types.h"
#include "x86.h"
#include "mmu.h"

int
main(int argc, char *argv[]) {
    int pid; //parent process --> pid = child pid. child process --> pid = 0;
    int *status = 0;
    int ret;

    pid = fork();
    if (pid == 0){
        printf(1,"Hello from children\n");
    }
    else {
        ret = waitpid(pid,status,0);
        if (ret > 0){
            printf(1,"WAITPID sucessful!\n");
        }
        else{
            printf(1,"WAITPID failed!\n");
        }
        printf(1,"Return value from waitpid = %d\n", ret);
    }


    return 0;
}

