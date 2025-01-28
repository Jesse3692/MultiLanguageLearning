# CUDA C编程

CUDA编程结构：
一个典型的CUDA编程结构包括5个主要步骤：
1. 分配GPU内存
2. 从CPU内存中拷贝数据到GPU内存
3. 调用CUDA内核函数来完成程序指定的运算
4. 将数据从GPU拷回CPU内存
5. 释放GPU内存空间

cuda-c代码格式化插件：clang-format 
sudo apt install clang-format

nvprof已经不支持了

```
jesse@Jesse:~/workspace/MultiLanguageLearning/cuda-c$ nvprof ./sumArraysOnGPU-timer
======== Warning: nvprof is not supported on devices with compute capability 8.0 and higher.
                  Use NVIDIA Nsight Systems for GPU tracing and CPU sampling and NVIDIA Nsight Compute for GPU profiling.
                  Refer https://developer.nvidia.com/tools-overview for more details.

```

使用Nsight Systems

```
jesse@Jesse:~/workspace/MultiLanguageLearning/cuda-c$ nsys profile --output=sumArraysOnGPU-timer ./sumArraysOnGPU-timer
/home/jesse/workspace/MultiLanguageLearning/cuda-c/./sumArraysOnGPU-timer Strarting...
Using Device 0: NVIDIA GeForce RTX 4070 Laptop GPU
Vector size 16777216
sumArraysOnGPU <<<16384,1024>>> Time elapsed 0.007793sec
Arrays match.

Generating '/tmp/nsys-report-f528.qdstrm'
[1/1] [========================100%] sumArraysOnGPU-timer.nsys-rep
Generated:
    /home/jesse/workspace/MultiLanguageLearning/cuda-c/sumArraysOnGPU-timer.nsys-rep
```