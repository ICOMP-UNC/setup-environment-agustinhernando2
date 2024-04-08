#include <shared.h>
#include <stdio.h>
#include <string.h>

int shared_lib_function(char* msg)
{
    printf("Hi, I'm a shared lib that receives '%s', and return '%ld'.\n", msg, strlen(msg));
    return strlen(msg);
}
