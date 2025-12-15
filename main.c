#include <stdio.h>
#include <sys/process.h>

int main(int argc, char *argv[])
{
    printf("Meu primeiro homebrew no PS3!\n");
    sys_process_exit(0);
    return 0;
}