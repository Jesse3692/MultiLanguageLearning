#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

void sumArraysOnHost(float *A, float *B, float *C, const int N)
{
    for (int idx = 0; idx < N; idx++)
    {
        C[idx] = A[idx] + B[idx];
    }
}

void initialData(float *ip, int size)
{
    // generate different seed for random number
    time_t t;
    srand((unsigned int)time(&t));
    for (int i = 0; i < size; i++)
    {
        ip[i] = (float)(rand() & 0xFF) / 10.0f;
    }
}

int main(int argc, char **argv)
{
    int nElem = 1024;
    size_t nBytes = nElem * sizeof(float);

    float *h_A, *h_B, *h_C;
    h_A = (float *)malloc(nBytes);
    h_B = (float *)malloc(nBytes);
    h_C = (float *)malloc(nBytes);

    initialData(h_A, nElem);
    initialData(h_B, nElem);

    sumArraysOnHost(h_A, h_B, h_C, nElem);

    // output the first few elements of the arrays to verify the result
    printf("First 10 elements of A, B, and C:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("A[%d] = %.2f, B[%d] = %.2f, C[%d] = %.2f\n", i, h_A[i], i, h_B[i], i, h_C[i]);
    }

    free(h_A);
    free(h_B);
    free(h_C);

    return (0);
}