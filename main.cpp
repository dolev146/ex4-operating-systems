#include <stdio.h>
#include <unistd.h>
#include <string>
#include <sys/wait.h>

int main()
{
    int pid = fork();
    if (pid == -1)
    {
        return 1;
    }
    std::string param = "./server";
    if (pid == 0)
    {
        // child process
        char *args[] = {(char *)(param.c_str()), NULL};
        execv(args[0], args);
    }
    else
    {
        // parent process
        wait(NULL);
    }
    

    return 0;
}