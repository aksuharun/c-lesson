#include <unistd.h>
#include <stdio.h>

int main() {
    write(1, "Hello World!\n", 13);
    printf("I am Harun\n");
    return 0;
}