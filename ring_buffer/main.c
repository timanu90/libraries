#include <stdio.h>

#include "ring_buffer.h"

char str1[] = {"STR 1"};
char str2[] = {"STR 2"};
char str3[] = {"STR 3"};
char str4[] = {"STR 4"};
char str5[] = {"STR 5"};

int main(int argc, char** argv)
{
    rbuffer rb;
    rbelement e1,e2,e3,e4,e5;

    ring_buffer_init(&rb);

    e1.elem = (void*)str3;
    e2.elem = (void*)str1;

    printf("%x\n",(e1.elem));

    ring_buffer_put(&rb,&e1);
    ring_buffer_put(&rb,&e2);

    rbelement *ptr;

    ptr = ring_buffer_get(&rb);
    printf("val = %s\t\tptr = %x\n",(char*)(ptr->elem), ptr->elem);


    return 0;
}
