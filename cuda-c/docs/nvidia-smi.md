
列出系统中的NVIDIA GPU设备
```sh
jesse@Jesse:~$ nvidia-smi -L
GPU 0: NVIDIA GeForce RTX 4070 Laptop GPU (UUID: GPU-1b724e78-eef5-4163-d43c-e4da15d41176)
```

查看GPU内存使用情况

```sh
jesse@Jesse:~$ nvidia-smi -q -i 0 -d MEMORY | tail -n 5
    Conf Compute Protected Memory Usage
        Total                             : N/A
        Used                              : N/A
        Free                              : N/A
```

查看GPU利用率

```sh
jesse@Jesse:~$ nvidia-smi -q -i 0 -d UTILIZATION | tail -n 4
        Max                               : 0 %
        Min                               : 0 %
        Avg                               : 0 %
```

查看GPU的详细信息

```sh
jesse@Jesse:~$ nvidia-smi -q -i 0

==============NVSMI LOG==============

Timestamp                                 : Thu Jan 30 16:14:43 2025
Driver Version                            : 566.36
CUDA Version                              : 12.7

Attached GPUs                             : 1
GPU 00000000:01:00.0
    Product Name                          : NVIDIA GeForce RTX 4070 Laptop GPU
    Product Brand                         : GeForce
    Product Architecture                  : Ada Lovelace
    Display Mode                          : Disabled
    Display Active                        : Disabled
    Persistence Mode                      : Enabled
    Addressing Mode                       : N/A
    MIG Mode
        Current                           : N/A
        Pending                           : N/A
    Accounting Mode                       : Disabled
    Accounting Mode Buffer Size           : 4000
    Driver Model
        Current                           : WDDM
        Pending                           : WDDM
    Serial Number                         : N/A
    GPU UUID                              : GPU-1b724e78-eef5-4163-d43c-e4da15d41176
    Minor Number                          : N/A
    VBIOS Version                         : 95.06.32.00.38
    MultiGPU Board                        : No
    Board ID                              : 0x100
    Board Part Number                     : N/A
    GPU Part Number                       : 2860-775-A1
    FRU Part Number                       : N/A
    Platform Info
        RACK Serial Number                : N/A
        Chassis Physical Slot Number      : N/A
        Compute Slot Index                : N/A
        Node Index                        : N/A
        Peer Type                         : N/A
        Module Id                         : 1
    Inforom Version
        Image Version                     : G002.0000.00.03
        OEM Object                        : 2.0
        ECC Object                        : N/A
        Power Management Object           : N/A
    Inforom BBX Object Flush
        Latest Timestamp                  : N/A
        Latest Duration                   : N/A
    GPU Operation Mode
        Current                           : N/A
        Pending                           : N/A
    GPU C2C Mode                          : N/A
    GPU Virtualization Mode
        Virtualization Mode               : None
        Host VGPU Mode                    : N/A
        vGPU Heterogeneous Mode           : N/A
    GPU Reset Status
        Reset Required                    : No
        Drain and Reset Recommended       : No
    GPU Recovery Action                   : None
    GSP Firmware Version                  : N/A
    IBMNPU
        Relaxed Ordering Mode             : N/A
    PCI
        Bus                               : 0x01
        Device                            : 0x00
        Domain                            : 0x0000
        Device Id                         : 0x286010DE
        Bus Id                            : 00000000:01:00.0
        Sub System Id                     : 0x36281043
        GPU Link Info
            PCIe Generation
                Max                       : 4
                Current                   : 4
                Device Current            : 4
                Device Max                : 4
                Host Max                  : 4
            Link Width
                Max                       : 8x
                Current                   : 8x
        Bridge Chip
            Type                          : N/A
            Firmware                      : N/A
        Replays Since Reset               : 0
        Replay Number Rollovers           : 0
        Tx Throughput                     : 350 KB/s
        Rx Throughput                     : 500 KB/s
        Atomic Caps Outbound              : N/A
        Atomic Caps Inbound               : N/A
    Fan Speed                             : N/A
    Performance State                     : P8
    Clocks Event Reasons
        Idle                              : Active
        Applications Clocks Setting       : Not Active
        SW Power Cap                      : Not Active
        HW Slowdown                       : Not Active
            HW Thermal Slowdown           : Not Active
            HW Power Brake Slowdown       : Not Active
        Sync Boost                        : Not Active
        SW Thermal Slowdown               : Not Active
        Display Clock Setting             : Not Active
    Sparse Operation Mode                 : N/A
    FB Memory Usage
        Total                             : 8188 MiB
        Reserved                          : 240 MiB
        Used                              : 0 MiB
        Free                              : 7948 MiB
    BAR1 Memory Usage
        Total                             : 8192 MiB
        Used                              : 8164 MiB
        Free                              : 28 MiB
    Conf Compute Protected Memory Usage
        Total                             : N/A
        Used                              : N/A
        Free                              : N/A
    Compute Mode                          : Default
    Utilization
        Gpu                               : 0 %
        Memory                            : 0 %
        Encoder                           : 0 %
        Decoder                           : 0 %
        JPEG                              : 0 %
        OFA                               : 0 %
    Encoder Stats
        Active Sessions                   : 0
        Average FPS                       : 0
        Average Latency                   : 0
    FBC Stats
        Active Sessions                   : 0
        Average FPS                       : 0
        Average Latency                   : 0
    ECC Mode
        Current                           : N/A
        Pending                           : N/A
    ECC Errors
        Volatile
            SRAM Correctable              : N/A
            SRAM Uncorrectable Parity     : N/A
            SRAM Uncorrectable SEC-DED    : N/A
            DRAM Correctable              : N/A
            DRAM Uncorrectable            : N/A
        Aggregate
            SRAM Correctable              : N/A
            SRAM Uncorrectable Parity     : N/A
            SRAM Uncorrectable SEC-DED    : N/A
            DRAM Correctable              : N/A
            DRAM Uncorrectable            : N/A
            SRAM Threshold Exceeded       : N/A
        Aggregate Uncorrectable SRAM Sources
            SRAM L2                       : N/A
            SRAM SM                       : N/A
            SRAM Microcontroller          : N/A
            SRAM PCIE                     : N/A
            SRAM Other                    : N/A
    Retired Pages
        Single Bit ECC                    : N/A
        Double Bit ECC                    : N/A
        Pending Page Blacklist            : N/A
    Remapped Rows
        Correctable Error                 : 0
        Uncorrectable Error               : 0
        Pending                           : No
        Remapping Failure Occurred        : No
        Bank Remap Availability Histogram
            Max                           : 64 bank(s)
            High                          : 0 bank(s)
            Partial                       : 0 bank(s)
            Low                           : 0 bank(s)
            None                          : 0 bank(s)
    Temperature
        GPU Current Temp                  : 42 C
        GPU T.Limit Temp                  : 33 C
        GPU Shutdown T.Limit Temp         : -12 C
        GPU Slowdown T.Limit Temp         : -2 C
        GPU Max Operating T.Limit Temp    : 0 C
        GPU Target Temperature            : 75 C
        Memory Current Temp               : N/A
        Memory Max Operating T.Limit Temp : N/A
    GPU Power Readings
        Power Draw                        : 1.97 W
        Current Power Limit               : 61.24 W
        Requested Power Limit             : N/A
        Default Power Limit               : 55.00 W
        Min Power Limit                   : 5.00 W
        Max Power Limit                   : 140.00 W
    GPU Memory Power Readings
        Power Draw                        : N/A
    Module Power Readings
        Power Draw                        : N/A
        Current Power Limit               : N/A
        Requested Power Limit             : N/A
        Default Power Limit               : N/A
        Min Power Limit                   : N/A
        Max Power Limit                   : N/A
    Clocks
        Graphics                          : 210 MHz
        SM                                : 210 MHz
        Memory                            : 405 MHz
        Video                             : 765 MHz
    Applications Clocks
        Graphics                          : N/A
        Memory                            : N/A
    Default Applications Clocks
        Graphics                          : N/A
        Memory                            : N/A
    Deferred Clocks
        Memory                            : N/A
    Max Clocks
        Graphics                          : 3105 MHz
        SM                                : 3105 MHz
        Memory                            : 8001 MHz
        Video                             : 2415 MHz
    Max Customer Boost Clocks
        Graphics                          : N/A
    Clock Policy
        Auto Boost                        : N/A
        Auto Boost Default                : N/A
    Voltage
        Graphics                          : 630.000 mV
    Fabric
        State                             : N/A
        Status                            : N/A
        CliqueId                          : N/A
        ClusterUUID                       : N/A
        Health
            Bandwidth                     : N/A
    Processes                             : None
    Capabilities
        EGM                               : disabled
```