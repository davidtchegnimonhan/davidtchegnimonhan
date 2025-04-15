#include <stdio.h>

void null_pointer_dereference(void)
{
    char password[14] = "EPI_CORE-DUMP";

    printf("Value: %s\n", password);
}

int main (void)
{
    null_pointer_dereference();
    return 0;
}
