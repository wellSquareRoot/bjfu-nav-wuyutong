# Task 2: Hello C++ (Week 2 & Week 3)

## 1. 为什么“传值”交换不了？
实参仅将数值传递给形参，形参在函数内的交换不会影响到外部的实参。

## 2. 编译运行方法（CMake 多文件工程）
在终端中进入当前目录（`task2/`），执行以下命令：
```bash
mkdir build
cd build
cmake ..
make
./main
```

截图：
![运行结果](./1.png)
