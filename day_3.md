1. 介绍一下DeepRec项目如何优化算子的？
   1. 通过使用intel的SIMD指令集，如AVX512
   2. 使用bf16数据类型
   3. 算子融合

2. AVX512指令集怎么提高性能？答：SIMD

3. 在使用SIMD的时候要注意什么？怎么避免使用SIMD使得吞吐量降低？
   答：因为现在CPU设计具有Dynamic Frequency Scaling机制，会根据不同的load来调整主频，load一般可以划分为三个级别：no-AVX, light-AVX, 
       heavy-AVX, 当大量使用SIMD指令时，会导致系统主频下降，影响其他指令执行速度，进而降低了整个程序的performance
      解决方法：
       多线程环境下，不同核心的频率是隔离的，像AVX512这样大量AVX操作的程序，应该使用单独线程放在独立CPU上进行，避免影响其他指令的执行。

4. 内存未对齐的情况如何处理？
   答： 	1. 通过attribute((align(16)))
	2. intrisic内置函数中的 mm_loadu_ps(速度较慢) 
	3. 编译器对齐 #progma pack(16)

5. 进程和线程的区别？
  	一个进程可以创建一个或多个线程， 一个进程可以创建一个或者多个进程，一个线程可以创建一个或多个线程，但是线程不可以创建进程。
	比较：
		1） 引入线程后，线程是处理器调度的基本单位，进程是资源分配的基本单位，同一个进程中线程的切换不会引起进程的切换，但不同进程中线程的切换会引起进程的切换。
		2） 引入线程后，不仅进程之间可以并发执行，一个进程中的多个线程也可以并发执行，多个线程会争夺处理机，在不同的状态之前进行切换，线程也是一个动态的概念，也有从创建到消亡的生命过程。
		3） 进程是资源分配的基本单位，一般线程不自己拥有系统资源，但可以访问其隶属于的进程的资源，统一进程中的所有线程都具有相同的地址空间（隶属进程的地址空间。
		4） 同一进程的不同线程可以分配到多个处理机上执行，加快了进程的完成，
	线程共享的数据：进程的所有数据 包括代码段、堆、公共数据
	线程私有的数据：唯一的线程ID，栈和栈指针，PC，通用目的寄存器、条件码。
	
6. 进程都拥有哪些资源？
	代码段、堆、栈，进程号，子进程，信号量。
7. 常用的STL
	vector map unordered_map priority_queue set unordered_set
8. vector的扩容实现过程，是否安全？
9. vector的底层实现
10. B+树的结构和特点
11. 算法：给一个入栈序列 一个出栈序列 判断出栈顺序是否合法？（自己实现栈）
