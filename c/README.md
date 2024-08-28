# C 语言

安装开发环境

```bash
scoop install gcc
```

## 数据类型

### int 整型

[int 类型](.\code\data_type_int.c)

| **类别**        | **定义示例**                         | **描述**                                 | **格式说明符** | **`sizeof`（字节）**    | **限制宏**             | **备注**                                            |
| --------------- | ------------------------------------ | ---------------------------------------- | -------------- | ----------------------- | ---------------------- | --------------------------------------------------- |
| `short`         | `short short_int = 0;`               | 短整型，通常为16位整数。                 | `%hd`          | `sizeof(short)`         | 无                     | 范围为`-32768`到`32767`                             |
| `int`           | `int i = 100;`                       | 标准整型，通常为32位整数。               | `%d`           | `sizeof(int)`           | `INT_MAX`, `INT_MIN`   | 范围为`-2147483648`到`2147483647`                   |
| `long`          | `long long_int = 0;`                 | 长整型，通常为32或64位整数，取决于平台。 | `%ld`          | `sizeof(long)`          | `LONG_MAX`, `LONG_MIN` | 32位系统为32位，64位系统为64位                      |
| `long long`     | `long long longlong_int = 0;`        | 长长整型，通常为64位整数。               | `%lld`         | `sizeof(long long)`     | 无                     | 范围为`-9223372036854775808`到`9223372036854775807` |
| `unsigned int`  | `unsigned int unsigned_int = 123;`   | 无符号整型，不允许负值。                 | `%u`           | `sizeof(unsigned int)`  | `UINT_MAX`             | 范围为`0`到`4294967295`                             |
| `unsigned long` | `unsigned long unsigned_long = 111;` | 无符号长整型。                           | `%lu`          | `sizeof(unsigned long)` | `ULONG_MAX`            | 范围为`0`到`18446744073709551615` (64位)            |
| `size_t`        | `size_t size_of_int = sizeof(int);`  | 通常用于表示对象大小的类型，取决于平台。 | `%zu`          | `sizeof(size_t)`        | 无                     | 通常为`unsigned int`或`unsigned long`               |

