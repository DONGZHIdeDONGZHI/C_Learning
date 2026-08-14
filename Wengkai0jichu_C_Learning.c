/*#include <stdio.h>
int main()
{
    printf("请输入你的身高：");
    int foot;
    int inch;
    scanf("%d %d",&foot,&inch);
    printf("你的身高是%lf米",(foot+inch/12.0)*0.3048);

    return 0;
}
*/

/*   #include <stdio.h>
int main()
{
    printf("%f",10.0/3.0);//整数和整数搞只会出现整数，有一个浮点，结果浮点
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int hour1,min1;
    int hour2,min2;
    int minmid;
    int hourEnd,minEnd;

    printf("请输入开始的时间（注意开始时间要早于结束时间）：");
    scanf("%d %d",&hour1,&min1);
    printf("请输入结束的时间：");
    scanf("%d %d",&hour2,&min2);

    min1 = hour1*60+min1;
    min2 = hour2*60+min2;
    minmid = min2-min1;
    
    minEnd = minmid%60;
    hourEnd = minmid/60;

    printf("时间差是%d小时%d分",hourEnd,minEnd);

    return 0;
}*/

/*#include <stdio.h>
int main()
{
    double a,b;

    printf("请输入两个数：");
    scanf("%lf %lf",&a,&b);
    printf("这两个数的平均数是%f",(a+b)/2);

    return 0;
}*/

//交换变量 需要有另一个变量
/*#include <stdio.h>
int main()
{
    int a=5;
    int b=6;
    int t;
    printf("现在的情况是a=%d,b=%d\n",a,b);

    t=a;
    a=b;
    b=t;//是要有另一个变量

    printf("现在的情况是a=%d,b=%d",a,b);

    return 0;
}*/

//复合赋值
/*#include <stdio.h>
int main()
{
    int a=5;
    int b;
    b=a++;//a++和++a的区别，b=a++相当于把a+1过后再赋值给b，然后a就变成了a+1的值，b=++a相当于先把a+1,再把a+1赋值给b
    printf("%d,%d",b,a);

    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int hour1,minute1;
    int hour2,minute2;

    scanf("%d %d",&hour1,&minute1);
    scanf("%d %d",&hour2,&minute2);

    int ih=hour2-hour1;
    int im=minute2-minute1;

    if (im<0)
    {
        im=60+im;
        ih--;

    }
    printf("时间差是%d小时%d分",ih,im);
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    printf("%d\n",5==3);
    printf("%d\n",5!=3);//判断是否相等的==和!=的优先级低于其他的关系运算符，如果统一等级且连续，则从左向右运算
    printf("%d\n",5>=3);//这几个都是关系运算符，运算优先级：算数>关系运算符>赋值运算
    return 0;
}*/

//找零计算器
/*#include <stdio.h>
int main()
{
    int price,bill;
    //输入金额和票面
    printf("请输入物品金额：");
    scanf("%d",&price);
    printf("请输入票面：");
    scanf("%d",&bill);
    //找零
    if ((bill-price)>=0)
    {
        printf("应该找你：%d元",bill-price);

    }//钱不够
    else {
        printf("钱不够，你应该再支付%d元",price-bill);
    }
    return 0;
}
//if后面要么跟{}，要么就跟一句，然后加；表示程序终止
//if和else的对齐原则，else对应最近的那个if，安全的方式是加上大括号*/
/*#include <stdio.h>
int main()
{
    int type;

    scanf("%d",&type);

    if (type==1){
        printf("你好");
    }
    else if (type==2){
        printf("早上好");
    }
    else if (type==3){
        printf("晚上好");
    }
    else if(type==4){
        printf("再见");
    }
    else {printf("什么啊");
    }
    return 0;
}*/

//switch的用法，不能跟浮点那些的，
//一般常见是int 和char，后面的表示单个字符串，如+ ，a
//计算器
/*#include <stdio.h>
int main()
{
    double a,b;
    char op;
    
    printf("请输入计算式： （如2+3）");
    scanf("%lf %c %lf",&a,&op,&b);

    switch (op){
        case '+':
            printf ("结果是：%lf",a+b);
            break;
        case '-':
            printf ("结果是：%lf",a-b);
            break;
        case '*':
            printf ("结果是：%lf",a*b);
            break;
        case '/':
            printf ("结果是：%lf",a/b);
            break;
        default:
            printf("不支持该运算");
    }

    return 0;
}*/

/*#include <stdio.h>
int main()
{
    printf("请输入物品的长度：  （厘米）");
    int L;
    scanf("%d",&L);
    double totalinch;
    totalinch=L/0.3048*12/100;
    int inch=(int)(totalinch);//这里有一个强制将浮点转换成整数的一个操作，此处是直接截断小数点，如果平时要四舍五入的话，就把原来的变量+0.5即可
    printf("用英式尺码表示为%d英尺%d英寸",inch/12,inch%12);


    return 0;
}*/

/*#include <stdio.h>
int main()
{
    printf("请输入初始的时间，用一个四位数表示：（如：1106表示11点零6分）\n");
    int t1;
    scanf("%d%",&t1);
    printf("请输入经过的分钟数：（可以超过60，也可以为负数）\n");
    int T;
    scanf("%d",&T);
    int totalmin=t1/100*60+t1%100+T;
    int endt=totalmin/60*100+totalmin%60;
    printf("最终的时间表示为%d",endt);

    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int num;
    printf("请输入一个正三位数：\n");
    scanf("%d",&num);
    int p1=num/100;
    int p2=num%100/10;
    int p3=num%10;
    printf("输出按位置逆序的数为：%d",p3*100+p2*10+p1);

    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int n;
    printf("请输入错误的十进制数：");
    scanf("%d",&n);
    int correct=(n/16*10+n%16);
    printf("正确的十进制数是：%d",correct);


    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int weight;
    int height;

    printf("请输入你的体重（公斤）：");
    scanf("%d",&weight);
    printf("请输入你的身高（厘米）：");
    scanf("%d",&height);
     
    double m = height/100.0;


    printf("你的BMI是：%f",(weight/(m*m)));


    return 0;
}*/
//从2026年8月14日开始上传到Github