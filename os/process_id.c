#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
//#include <sys/wait.h>
#include <unistd.h>

int main(void)
{
    int pid=fork();
    if(pid==0)
    {
        printf("Child =>ppid : %d Parent => PID : %d \n",getppid(),getpid());
        exit(1);
    }
    else if(pid>0)
    {
        printf("Parent => PID %d \n",getpid());
        printf("Waiting for child process to finish");
        //wait(NULL);
        printf("Child process finished");
    }
    else
    {
        printf("unable to create child process");
    }
}