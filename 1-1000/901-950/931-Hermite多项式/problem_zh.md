## 题目描述

用递归的方法求Hermite多项式的值

$$h_n(x)=\begin{cases}\begin{array}{c} 1 & n=0 \\ 2x & n=1 \\ 2xh_{n-1}(x)-2(n-1)h_{n-2}(x) & n>1 \end{array} \end{cases}$$

对给定的$x$和正整数$n$，求多项式的值。

## 输入

给定的$n$和正整数$x$。

## 输出

多项式的值。

## 样例

```input1
1 2
```

```output1
4.00
```


 ## 来源

 一本通在线评测 