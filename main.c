#include "all_finds_overloads.h"
#include "assert.h"

int main()
{
    int ai[] = {4,5,6};
    float af[] = {1.5,2.5,3.5};
    char string[] = "ABCDabcd1234!@#$";
    unsigned long long aull[] = {101, 102, 103, 104};

    assert(2 == FIND(int)(ai, sizeof(ai), 6));
    assert(1 == FIND(float)(af, sizeof(af), 2.5));
    assert(8 == FIND(char)(string, sizeof(af), '1'));
    assert(3 == FIND(uint64_t)(aull, sizeof(aull), 104.0));

    return 0;
}
