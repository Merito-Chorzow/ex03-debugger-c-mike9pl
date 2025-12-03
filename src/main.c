#include <stdio.h>
#include <stdint.h>
#include "bug.h"

int main(void){
    for(int i=0;i<16;i++) ((uint8_t*)BUF)[i] = (uint8_t)i;

    int s = sum_u8((const uint8_t*)BUF, 15);
    printf("sum=%d\n", s);

    write_tail(15, 0xAA);

    puts("done");
    return 0;
}
