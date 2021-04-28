//
// Created by Bao Lam on 4/27/2021.
//

#include "user.h"
#include "stat.h"
#include "types.h"
#include "x86.h"
#include "mmu.h"


int main(int argc, char *argv[]) {
    int input = 0;
    int pid = fork();
    int *status = 0;

    if (pid == 0){
        while(input < 10){
            hello();
            ++input;
        }
        exit(20);
    }
    else{
        *status = pid;
        wait(status);
        printf(1,"Child exit status: %d\n",*status);
    }


    return 0;
}