#### 阶段一：入门基础（1周）
###### 学习编程概念：

1. 介绍什么是编程和计算机科学的基础知识。
   1. 看《CSP认证一本通》的相关章节
   2. 我找一些便于理解的视频来讲解
2. 解释变量、数据类型和运算符等基本概念。 
   1. 看《CSP认证一本通》的相关章节
   2. 我找一些便于理解的视频来讲解
   3. 基础部分按初学网站来做参考和讲解：
      1. 具体参考网站：[https://www.learncpp.com/](https://www.learncpp.com/)
      2. 参考网站2：[https://www.runoob.com/cplusplus/cpp-tutorial.html](https://www.runoob.com/cplusplus/cpp-tutorial.html)
      3. 参考文档：**黑马培训C++基础入门.md**

  
###### C++环境设置（我来代替操作）：
下载、安装和配置C++集成开发环境（IDE）。初步想用vscode代替visual stdio
(vscode界面比visual stdio和dev cpp界面好看 而且较为容易增加扩展）

1. Hello, World!：
   - 编写第一个C++程序，并运行它，使其输出“Hello, World!”。
2. 数据类型和变量：
   - 学习整数、浮点数和字符等基本数据类型。
   - 定义和使用变量。
3. 运算符和表达式：
   - 介绍算术、赋值和比较运算符。
   - 学习算术和逻辑表达式的使用。
#### 阶段二：基础进阶（4周  包含数据结构）
以下皆参考《CSP认证一本通》的相关章节和参考网站1，2（[https://www.learncpp.com/](https://www.learncpp.com/)和
[https://www.runoob.com/cplusplus/cpp-tutorial.html](https://www.runoob.com/cplusplus/cpp-tutorial.html)）

1. 条件语句：
   - 学习if-else和switch语句的使用。
   - 编写根据条件执行不同操作的程序。
2. 循环结构：
   - 学习for循环、while循环和do-while循环。
   - 编写可以重复执行的程序。
3. 数组和字符串：（初步介绍第一个容器 为下面更多的基本容器打基础）
   - 介绍数组和字符串的概念和用法。
   - 学习如何声明、初始化和访问数组。
   - 使用标准库函数操作和处理字符串。
4. c++基本容器：
   - 数组（Array）：
         1. 是最简单的容器类型，可以存储固定大小的元素序列。
         2. 元素在内存中是连续存储的。
   - 向量/动态数组（Vector）：
         1. 类似于数组，但可以动态调整大小。使用动态分配的内存进行存储
         2. 支持动态添加、删除和访问元素。
   - 列表（List）：
         1. 是双向链表的实现，每个节点都存储一个元素。支持在任意位置插入和删除元素。
   - 堆栈（Stack）：
         1. 使用后进先出（LIFO）的原则存储元素。
         2. 只能在堆栈的顶部进行插入或删除操作。
   - 队列（Queue）：
         1. 使用先进先出（FIFO）的原则存储元素。
         2. 只能在队列的末尾插入元素，在队列的头部删除元素。
   - 映射/字典（Map/Dictionary）：
         1. 存储由键-值对组成的元素。
         2. 通过键查找值，键是唯一的。
   - 集合（Set）：
         1. 存储唯一元素的集合。不按特定顺序存储元素。
   - 栈（Deque）：
         1. 双端队列，既可以像堆栈一样操作，也可以像队列一样操作。

   - 此外，C++还提供了其他扩展的容器类，如unordered_map、unordered_set等，在某些情况下可以提供更好的性能。
5. 函数和参数传递和作用域问题：
   - 定义和调用函数。
   - 学习值传递和引用传递的概念。
   - 函数中部分变量的生命周期（何时会被销毁）
   - 介绍c++里指针（地址）的概念。
6. 文件操作：
   - 学习如何读写文件。
   - 熟悉流对象和文件指针的使用。
7. 面向对象的概念
   - 何为类和对象。
   - 继承的概念。
   - 重载的概念。
   - 多态的概念。

#### 阶段三：CSP算法入门（暂定8周）

###### 1.时间复杂度和空间复杂度的计算（很重要）

###### 2.基础排序
冒泡排序
选择排序
归并排序
插入排序
快速排序
堆排序
###### 3.算法思想

   1. 动态规划：
      - 通过将问题划分为子问题，并利用子问题的解来构建原始问题的解。
      - 在C++中，可以使用递归或者迭代的方式实现动态规划算法。
   2. 回溯法：
      - 通过不断尝试所有可能的解，回溯到前一步重新选择路径直到找到解。
      - 在C++中，可以使用递归和回溯的方式实现回溯算法。
   3. 贪心算法：
      - 在每一步都选择当前最优解，从而希望最终能够达到全局最优解。
      - 在C++中，贪心算法通常通过排序和选择来实现。
   4. 查找算法：
      - 二分查找（重要）
   5. 分治算法：
      - 将问题划分为更小的子问题，然后将子问题的解合并起来得到原始问题的解。
      - 在C++中，可以使用递归的方式实现分治算法。
   6. 模拟算法：
      - 根据问题要求，模拟真实场景进行计算和推演。
      - 在C++中，模拟算法通常通过循环、条件判断和数据结构组合来实现。
   7. 搜索算法：
      - 通过搜索空间中的各种状态或组合来找到问题的解。
      - 在C++中，可以使用深度优先搜索（DFS）、广度优先搜索（BFS）等方式实现搜索算法。
###### 
#### 阶段四：CSP认证实战（完成上边进度后一直到结束）

1. 实战书：**《CSP认证考试历年真题解》**
2. 洛谷真题：[https://www.luogu.com.cn/problem/list?keyword=csp&content=true&type=AT%7CB%7CCF%7CP%7CSP%7CUVA&page=1](https://www.luogu.com.cn/problem/list?keyword=csp&content=true&type=AT%7CB%7CCF%7CP%7CSP%7CUVA&page=1)


参考书1：**《CSP认证一本通》**
参考书2：**《CSP认证考试历年真题解》**
参考书3：**《趣学算法》**
###### 洛谷真题：
[https://www.luogu.com.cn/problem/list?keyword=csp&content=true&type=AT%7CB%7CCF%7CP%7CSP%7CUVA&page=1](https://www.luogu.com.cn/problem/list?keyword=csp&content=true&type=AT%7CB%7CCF%7CP%7CSP%7CUVA&page=1)

参考文档：**黑马培训C++基础入门.md**
参考网站1：[https://www.learncpp.com/](https://www.learncpp.com/)
参考网站2：[https://www.runoob.com/cplusplus/cpp-tutorial.html](https://www.runoob.com/cplusplus/cpp-tutorial.html)





