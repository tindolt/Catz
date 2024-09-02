#include <windows.h>
#include <stdio.h>

void foo(void)
{
    printf("Hello World\n");
}

int main()
{
    int Integer;

    Integer = 5;
    Integer = Integer + 2;

    foo();
}