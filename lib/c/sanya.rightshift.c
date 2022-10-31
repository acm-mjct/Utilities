#include <stdio.h>

int main()
{

    unsigned int num = 0xff;

    printf("\nValue of num = %04X before right shift.", num);

    /*shifting 2 bytes right*/
    num = (num >> 2);
    printf("\nValue of num = %04X after right shift.", num);

    return 0;
}