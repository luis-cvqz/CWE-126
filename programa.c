#include <stdio.h>

char cookie[] = "ganaste!";

int main()
{
    char buffer[80];
    printf("cookie: %08x\n", &cookie);

    gets(buffer);
    printf(buffer);
    printf("\n");
}