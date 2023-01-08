#include <stdio.h>
#include "pico/stdlib.h"

void my_main(void);

int main()
{
    stdio_init_all();
    puts("Hello, world!");

    my_main();

    return 0;
}
