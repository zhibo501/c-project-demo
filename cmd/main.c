#include <stdio.h>

#include "config.h"
#include "demo.h"

int main(int argc, char *argv[]) {
    printf("%s Version %d.%d\n", "Demo", Demo_VERSION_MAJOR, Demo_VERSION_MINOR);
    printf("1 + 2 = %d\n", adder(1,2));
    return 0;
}

