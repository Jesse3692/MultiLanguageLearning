#include<stdio.h>
#include<limits.h>

int main(){
    short short_int = 0;//短整型
    printf("show short int %hd\n", short_int); // show short int 0
    int i = 100; //整型
    printf("show int %d\n", i); //show int 100
    long long_int = 0; // 长整型
    printf("show long int %ld\n", long_int); //show long int 0
    long long longlong_int = 0; //长长整型
    printf("show long long int %lld\n", longlong_int); //show long long int 0
    unsigned int unsigned_int = 0; //无符号整型
    printf("show unsigned int %u\n", unsigned_int); //show unsigned int 0
    unsigned long unsigned_long = 0; // 无符号长整型
    printf("show unsigned long %lu\n", unsigned_long); //show unsigned long 0

    // printf格式化
    printf("short int %d\n", short_int); //short int 0 // 占位符 %d 带符号的十进制整数
    printf("int in oct %o\n", i); // int in oct 144 // 占位符 %o 整数的八进制表示
    printf("int in hex %x\n", i); // int in hex 64 // 占位符 %x 整数的十六进制表示
    printf("show long int %ld\n", long_int); //show long int 0 // 占位符 %ld 长整型
    printf("show long long int %lld\n", longlong_int); //show long long int 0 // 占位符 %lld 长长整型
    printf("show unsigned short int %hu\n", unsigned_int); //show unsigned short int 0 // 占位符 %hu 无符号短整型
    printf("show unsigned int %u\n", unsigned_int); //show unsigned int 0 // 占位符 %u 无符号整型
    printf("show unsigned long %lu\n", unsigned_long); //show unsigned long 0 // 占位符 %lu 无符号长整型

    // 整型长度
    size_t size_of_int = sizeof(int); // 4
    printf("int length is %ld\n", size_of_int); // int lenth 4
    printf("short int length is %ld\n", sizeof(short int)); //short int length 2
    printf("long int length is %ld\n", sizeof(long int)); //long int length 8
    printf("long long int length is %ld\n", sizeof(long long int)); // long long int length 8
    printf("unsigned int length is %ld\n", sizeof(unsigned int)); //4
    printf("unsigned short int length is %ld\n", sizeof(unsigned short int)); //unsigned short int length is 2

    // 整型范围
    printf("max int %d, min %d \n", INT_MAX, INT_MIN); //max int 2147483647, min -2147483648 
    printf("max short int %d, min %d\n", SHRT_MAX, SHRT_MIN); // max short int 32767, min -32768
    printf("max long int %ld, min %ld\n", LONG_MAX, LONG_MIN); //max long int 9223372036854775807, min -9223372036854775808
    printf("max long long int %lld, min %lld\n", LLONG_MAX, LLONG_MIN); // max long long int 9223372036854775807, min -9223372036854775808
    printf("max unsigned int %u, min %u\n", UINT_MAX, 0); // max unsigned int 4294967295, min 0

    return 0;
}