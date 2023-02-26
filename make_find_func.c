#ifdef T
#include "templates.h"
int FIND(T) (T *array, int size, T element)
{
    int i;
    for(i=0; i<size; i++) {
        if (array[i] == element) {
            return i;
        }
    }
    return -1;
}
#endif
