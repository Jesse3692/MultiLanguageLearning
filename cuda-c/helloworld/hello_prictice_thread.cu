#include<stdio.h>

__global__ void helloFromGPU(void){
    printf("Hello World from GPU thread %d!\n", threadIdx.x);
}

int main(void){
    // hello from cpu
    printf("Hello World from CPU!\n");

    // hello from gpu
    helloFromGPU<<<1, 10>>>();
    cudaDeviceSynchronize();
    return 0;
}