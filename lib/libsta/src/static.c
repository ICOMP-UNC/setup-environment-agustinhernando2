#include <static.h>
#include <stdio.h>
#include <string.h>

int static_lib_function(char* msg)
{
    printf("Hi, I'm a static lib that receives '%s', and return '%ld'.\n", msg, strlen(msg));
    return strlen(msg);
}
