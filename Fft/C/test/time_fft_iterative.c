#include "math.h"
#include "fft_iterative.h"
#define MAXPOW 22

int main(int argc, char **argv)
{
    
    int elements = pow(2, MAXPOW);
    struct complexarr *array = alloccomplexarr(elements);
    double step = 2 * M_PI / elements;
    for (int i = 0; i < elements; i++)
    {
        array->val[i].re = sin(step * i);
    }
    fft_iterative_ordered(&array);
    return 0;
}