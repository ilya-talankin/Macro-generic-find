#include <stdio.h>
#include "all_finds_overloads.h"

int main()
{
    int ai[] = {4,5,6};
    float af[] = {1.5,2.5,3.5};
    char string[] = "ABCDabcd1234!@#$";
    unsigned long long aull[] = {101, 102, 103};
    printf("%d\n",FIND(int)(ai, sizeof(ai), 6.9));
    /*printf("%d\n",FIND(float)(af, sizeof(af), 3.5));
    printf("%d\n",FIND(char)(string, sizeof(string), '!'));
    printf("%d\n",FIND(uint64_t)(aull, sizeof(aull), 103.0));
    */
    return 0;
}
