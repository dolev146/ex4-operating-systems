#include <stdio.h>
#include <unistd.h>
#include <string>

int main()
{
    int pid = fork();
    std::string param = "./server";
    if (pid == 0)
    {
        char *args[] = {(char *) (param.c_str()), NULL};
        execv(args[0], args);
    }
    printf("parent\n");

    return 0;
}