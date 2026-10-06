//接下来是社团的C语言部分的面试题，我也放置在这里了，其中数组是之前没接触过的

/*
1．环境题：安装并且配置 VScode 开发环境，编译并运行一个程序。用自己的话说明“源代码—编译—链接—运行”四个环节分别做了什么，并带一张成功运行的终端截图。

    1.源代码，就是写出来的程序，printf那些，是人给机器的指令，想让机器做什么动作
    2.编译，但是机器根本不认识printf这种东西，它只知道010101怎么弄，编译的意思是把源代码弄成0101这种机器能看懂的语言，gcc就是干这个事情的
    3.链接，编译完成过后只是一个半成品，有一些地方机器都还看不懂，有了个printf，他只知道要调用，链接的意思是从C语言的标准库里找到printf这个工具的位置，然后调用，和代码拼在一起组成一个完整的程序
    4.运行，生成了.exe，程序放进内存，由cpu一条一条执行
*/
/*#include <stdio.h>
int main(void)
{
    printf("Hello,World!");
    return 0;
}*/

//C 语言代码阅读
/*#include <stdio.h>
int main(void)//之前是啥都没写，这个void也是代表什么都没的意思，跟之前一样吧应该，只是比较标准
{
 int data[5] = {3, 7, 2, 9, 5};//这里是数组，之前应该没学过，从0开始直到data[4]，相当于5个“相同类型的变量”，方便写，一般没有data[5]，可能会炸吧
 int max = data[0];
 int sum = 0;
 for (int i = 0; i < 5; i++)
 {
 sum += data[i];
 if (data[i] > max)
 max = data[i];
 }
 printf("max = %d\n", max);
 printf("average = %.1f\n", sum / 5.0);
 return 0;
}*/

/*
2.写出上述程序的输出结果，并逐句说明 max、sum 和 for 循环的作用。
  为什么平均值计算中使用 5.0 而不是 5？
*/

/*
3．这段程序想计算 5 个数的平均值，但至少有 3 处问题。请找出问题、解释可能造成的后
果，并给出可以正确运行的版本。
*/

/*
//C 语言找错题
#include <stdio.h>
int main(void)
{
    int data[5] = {18, 21, 19, 24, 23};
    int total = 0;//不初始化直接从内存里读一个莫名其妙的数据

    for (int i = 0; i < 5; i++)//不应该是<=5,不能取5，上面说了，可能会炸，崩溃
    {
        total += data[i];
    }//没大括号

    printf("average = %f\n", total/5.0);//int除以float得到float，%d是给int用的
return 0;
}*/

/*
4．编程题：输入 5 个温度值，输出最高值、最低值和平均值，并统计其中有几个温度不低于 30 ℃。要求使用数组和循环。
*/

/*#include <stdio.h>
int main()
{
    printf("请输入5个温度：\n");

    int temp[5];
    for (int  i = 0; i < 5; i++)
    {
        scanf("%d",&temp[i]);
    }
    

    int max = temp[0];
    int min = temp[0];
    int sum = 0;
    int n = 0;

    for (int i = 0; i < 5; i++)
    {
        if (temp[i] >= max)
        {
            max = temp[i];
        }
        if (temp[i] <= min)
        {
            min = temp[i];
        }

        if (temp[i]>=30)
        {
            n++;
        }

        sum += temp[i]; 
    }
    printf("最高值：%d\n最低值：%d\n平均值：%f\n有 %d 个温度不低于30度",max,min,sum / 5.0,n);
    
    return 0;
}*/

//如果不用数组呢，让我来试试
/*#include <stdio.h>
int main()
{
    int temp;
    int sum, max, min, count;

    printf("请输入第1个温度：\n");
    scanf("%d", &temp);
    max = min = sum = temp;

    if (temp >= 30) {
        count = 1;
    } else {
        count = 0;
    }

    for (int i = 2; i <= 5; i++)
    {
        printf("请输入第%d个温度：\n", i);
        scanf("%d", &temp);

        if (temp > max) max = temp;
        if (temp < min) min = temp;
        if (temp >= 30) count++;
        sum += temp;
    }

    printf("最高值：%d\n最低值：%d\n平均值：%f\n有 %d 个温度不低于30度",
           max, min, sum / 5.0, count);
    return 0;
}*/

/*
好吧，其实不用的话还是有点麻烦的，什么时候用数组呢：
不用数组适合的场景：
    数据只需要“边走边算”，用完就扔，不需要回头再看：比如求最大值、最小值、总和、计数，这些只需要一个“临时变量”就够了。
    不用的优点：省内存，代码紧凑，适合“流水线式”处理。
必须用数组的场景：
    需要回头访问之前的数据：倒序输出、排序、查找某个值、判断是否重复出现。
    用数组的优点：多占一点内存，但能回头操作，适合“需要反复访问”的任务。
不用数组：省内存，代码紧凑，适合“流水线式”处理。
*/