#include <stdio.h>
#include <unistd.h>

int main()
{
    int pid = fork();
    if (pid == 0)
    {
        char *args[] = {"./server", NULL};
        execv(args[0], args);
    }
    printf("parent");

    return 0;
}