#include <windows.h>

void foo(void)
{
    OutputDebugStringA(
        "Hello World\n");
}

int main()
{
    foo();
}