#include <greetings.h>
#include <stdio.h>

#include <shared.h>
#include <static.h>

int main(int argc, char* argv[])
{
    printf("Hello, World\n");
    greetings();
    printf("Calling shared lib from main program. I get '%d'.\n", shared_lib_function("Hello, OS II"));
    printf("Calling static lib from main program. I get '%d'.\n", static_lib_function("Bye, OS II"));

    return 0;
}
