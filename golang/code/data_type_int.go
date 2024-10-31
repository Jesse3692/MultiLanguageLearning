package main

import (
	"fmt"
	"math"
)

func main() {
	// 定义各种整数类型的变量并使用它们
	var int8Var int8 = 127
	var int16Var int16 = 32767
	var int32Var int32 = 2147483647
	var int64Var int64 = 9223372036854775807

	var uint8Var uint8 = 255
	var uint16Var uint16 = 65535
	var uint32Var uint32 = 4294967295
	var uint64Var uint64 = 18446744073709551615

	var intVar int = 1234567890 // 通常是 int32 或 int64
	// var uintVar uint = 123456789 // 通常是 uint32 或 uint64

	// 使用变量避免编译错误
	fmt.Printf("int8Var: %d\n", int8Var)
	fmt.Printf("int16Var: %d\n", int16Var)
	fmt.Printf("int32Var: %d\n", int32Var)
	fmt.Printf("int64Var: %d\n", int64Var)
	fmt.Printf("uint8Var: %d\n", uint8Var)
	fmt.Printf("uint16Var: %d\n", uint16Var)
	fmt.Printf("uint32Var: %d\n", uint32Var)
	fmt.Printf("uint64Var: %d\n", uint64Var)

	// 输出各类型的大小（字节）和取值范围
	fmt.Printf("int8: %d bytes, min: %d, max: %d\n", int8(1), math.MinInt8, math.MaxInt8)
	fmt.Printf("int16: %d bytes, min: %d, max: %d\n", int16(1), math.MinInt16, math.MaxInt16)
	fmt.Printf("int32: %d bytes, min: %d, max: %d\n", int32(1), math.MinInt32, math.MaxInt32)
	fmt.Printf("int64: %d bytes, min: %d, max: %d\n", int64(1), math.MinInt64, math.MaxInt64)

	fmt.Printf("uint8: %d bytes, min: 0, max: %d\n", uint8(1), math.MaxUint8)
	fmt.Printf("uint16: %d bytes, min: 0, max: %d\n", uint16(1), math.MaxUint16)
	fmt.Printf("uint32: %d bytes, min: 0, max: %d\n", uint32(1), math.MaxUint32)
	fmt.Printf("uint64: %d bytes, min: 0, max: %d\n", uint64(1), uint64(math.MaxUint64)) // 修正溢出错误

	fmt.Printf("int: %d bytes, min: %d, max: %d\n", int(1), int(math.MinInt32), int(math.MaxInt32))
	fmt.Printf("uint: %d bytes, min: 0, max: %d\n", uint(1), uint(math.MaxUint32))

	// 格式化输出
	fmt.Printf("int in decimal: %d\n", intVar)
	fmt.Printf("int in octal: %o\n", intVar)
	fmt.Printf("int in hex: %x\n", intVar)
}
