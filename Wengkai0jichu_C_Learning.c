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
//test update
//从2026年8月14日开始上传到Github

/*#include <stdio.h>
int main()
{
    printf("hello,world!");
    return 0;
}*/

//switch 练习

//星期计算器
/*#include <stdio.h>
int main(){
    printf("请输入1-7的整数，我将输出对应的星期的英文:");
    int day;
    scanf("%d",&day);
    switch (day)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("Invalid");
        break;
    }
    return 0;
}*/

//月份天数查询
/*#include <stdio.h>
int main()
{
    printf("请输入要查询的月份，将查询该月份的天数");
    int month;
    scanf("%d",&month);

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("这个月有31天");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("这个月有30天");
        break;
    case 2:
        printf("如果是闰年的话，这个月有29天，如果是平年的话这个月只有28天");
        break;
    default:
        printf("invalid");
        break;
    }
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    printf("请输入一个命令：\n（a 或 A → 添加 /d 或 D → 删除 /q 或 Q → 退出）：");
    char order;
    scanf("%c",&order);

    switch (order)
    {
    case 'a':
    case 'A':
        printf("添加");
        break;
    case 'd':
    case 'D':
        printf("删除");
        break;
    case 'q':
    case 'Q':
        printf("退出");
        break;
    default:
        printf("请输入正确的指令！");
        break;
    }
    return 0;
}*/

//位数判断
/*#include <stdio.h>
int main()
{
    printf("请输入一个四位数以下的整数（包含四位数）\n");
    int num;
    int n=0;
    scanf("%d",&num);

    //if (num>999&&num<10000){//我这里最开始写成了10000>num>999，直接出错了，我搞忘它连续比较会按照顺序来了，直接变成1>999，跳过第一个了
    //  n=4;这一坨是错的
    //&&是且，||是或
    if (num>=10000){
        printf("请输入正确的数字！");
        return 0;//这里用return是在这个分支过后在main里面结束整个程序
    }else if(num>999){
        n=4;
    }else if (num>99){
        n=3;
    }else if (num>9){
        n=2;
    }else if (num>0){
        n=1;
    }else {
        printf("请输入正确的数字!");
        return 0;}//同样要结束

    printf("%d位数\n",n);
    return 0;
}*/

//whlie循环//先判断条件，再进循环体

//数字位数计算
/*#include <stdio.h>
int main()
{
    printf("请输入数字（非负整数）：\n");
    int num;
    int n=0;
    scanf("%d",&num);
    n++;        //这个地方必须有有一个这一坨，如果没有，输入0.就会输出这是0位数，不对
    num /= 10;  //如果有这一坨，会先+1，保证所有都至少是1位数，0是一位数在这里

    while (num>0){
        n++;
        num /=10;
    }
    printf("这是一个%d位数",n);
    return 0;
}*/

//do while循环//先进循环体，再判断条件

//数字位数计算
/*#include <stdio.h>
int main()
{
    int num;
    int n=0;
    printf("请输入数字（非负整数）：");
    scanf("%d",&num);

    do
    {
        n++;
        num /=10;//用这个就可以避免用while的麻烦情况

    } while (num>0);
    printf("这是一个%d位数",n);
    return 0;
}*/

//随机数字生成并且加限制
/*#include <stdio.h>
#include <stdlib.h>//
#include <time.h>//

int main()
{
    srand(time(0));//
    int a = rand();//上面4坨都是为了得到一个随机数，但是随机数会非常大
    printf("%d\n",a%100);//这一步取余100，相当于取一个100以内的数

    return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int number = rand ()%100+1;
    int count = 0;
    int a = 0;

    printf("我已经想好了一个1-100以内的数\n");
    do      //因为不管怎么样都会进这个循环，所以用do whlie更合适
    {
        printf("请猜这个数：");
        scanf("%d",&a);
        count++;

        if (a>number){
            printf("大了\n");
        }else if (a<number){
            printf("小了\n");
        }

    } while (number != a);

    printf("猜对了，答案是%d，你猜了%d次",number,count);
    return 0;
}*/

//算平均数
/*#include <stdio.h>
int main()
{
    int n=0;
    int total=0;
    int a;
    printf("请输入几个正整数（结束输入时用-1结尾）\n");
    do
    {
        n++;
        printf("请输入第%d个数:",n);
        scanf("%d",&a);
        total += a;

    } while (a != -1);
    double totalnumber = total;
    printf("你输入这%d个数的平均数是%lf",n-1,(totalnumber+1.0)/(n-1));
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int number;
    int sum = 0;
    int count = 0;
    
    printf("请输入要计算的平均数：（结尾用-1表示停止计数）\n");
    scanf("%d",&number);
    while (number != -1)
    {
        count ++;
        sum += number;
        scanf("%d",&number);
    }
    printf("这%d个数的平均数是%lf",count,sum*1.0/count);
    return 0;
}*/

/*
怎么选择合适的结构，还是先弄一个流程图，看是先判断还是先执行
1/搞清楚要重复做些什么
2/确认循环的判断条件
3/循环开始之前应该做些什么，初始状态，循环外部初始化
4/每次重复完成的状态需要更新什么，迭代
5/检查特殊和边界情况
*/

//整数求逆
/*#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);

    int digit;
    int ret=0;
    
    while (x>0){
        digit = x%10;
        printf("%d",digit);
        ret = ret*10 + digit;
        printf("x=%d,digit=%d,ret =%d\n",x,digit,ret);
        x /= 10;
    }
    printf("%d",ret);
    return 0;
}*/

//最大值最小值
/*#include <stdio.h>
int main()
{
    int num,max,min;
    printf("输入几个数字，以-1作为结束：");

    scanf("%d",&num);
    if (num!=-1)
    {
        max=num;
        min=max;

        while (num!=-1)
        {
            if(num>=max){
                max=num;
            }
            if(num<=min){
                min=num;
            }
        scanf("%d",&num);
        }

        printf("最大值是：%d\n",max);
        printf("最小值是：%d",min);
       
    }
    else {
        printf("没有输入任何有效正整数！");
    }
    
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int num;

    do
    {
        printf("请你猜一个数字:");
        scanf("%d",&num);
        if (num>42)
        {
            printf("大了\n");
        }else if (num<42)
        {
            printf("小了\n");
        }
    
    } while (num!=42);
    printf("猜对了");
    
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int op;

    do
    {
        printf("1.添加\n");
        printf("2.删除\n");
        printf("3.程序结束\n");
        scanf("%d",&op);

        switch (op)
    {
        case 1:
            printf("执行添加\n");
            break;
        case 2:
            printf("执行删除\n");
            break;
        case 3:
            printf("程序结束");
            break;
        default:
            printf("无效选择，请重新输入\n");
            break;
    }
    } while (op!=3);
    return 0;
}*/

//阶乘
/*#include <stdio.h>
int main()
{
    printf("请输入一个数字，将计算它的阶乘：\n");
    int num,total;
    scanf("%d",&num);
    total = num;
    while (num!=1)
    {
        num--;
        total*=num;
    }
    
    printf("这个数的阶乘是:%d",total);
    return 0;
}*/

//For 循环

//如果用For循环来算阶乘
/*#include <stdio.h>
int main()
{
    int n;

    scanf ("%d",&n);
    int fact = 1;

    int i =1;
    for ( i = 1; i <= n; i++)
    //也可以弄成把上面那一个初始化i放到循环里面，变成for ( int i = 1; i <= n; i++)
    //如果不满足中间那个条件的话，程序会直接跳过，不循环
    {
        fact *= i;
    }
    printf("%d!=%d\n",n,fact);
    return 0;
}*/
//for (cout=10;count>0;count--)是对于初始的count=10，当count>0时， 重复做下面的循环体，
//每一轮循环昨晚循环体中的语句后，使得count--
//For循环内部每一个表达式都可以省略，例如for(;条件;)==while(条件),但是分号不能省

//判断素数
/*#include <stdio.h>
int main()
{
    int x;

    scanf("%d",&x);

    int i;
    int isPrime = 1;    // x是素数，这一步我个人觉得理解成布尔值要好理解一点
    for ( i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            isPrime = 0;
            break;  
            //break和continue的区别是，遇到了break，直接结束整个循环，而continue的意思是
            //遇到了continue，终止这个循环，意思是，不做接下来的部分，但是重新回到开头，完成下一次循环
        }
    }
    if (isPrime == 1)
    {
        printf("是素数\n");
    }else{
        printf("不是素数\n");
    }
    return 0;
}*/

//循环的嵌套
//输出从1到100的所有素数
/*#include <stdio.h>
int main()
{   
    int i;

    
    for (int num = 2; num <=100; num++)
    {
            int isPrime=1;

            for ( i = 2; i < num; i++)
        {
            if (num % i==0)
            {
                isPrime = 0;
                break;
            }   
        }

        if (isPrime == 1)
        {
            printf("%d ",num);
        }
    }
    printf("\n");
    return 0;
}*/

//输出前50个素数
/*#include <stdio.h>
int main()
{   
    int i;
    int cnt=0;//加一个计数器
    //for (int num = 2; num <=100; num++)
    int num=2;
    while (cnt < 50)
    {
         int isPrime=1;

            for ( i = 2; i < num; i++)
        {
            if (num % i==0)
            {
                isPrime = 0;
                break;
            }   
        }

        if (isPrime == 1)
        {
            printf("%d ",num);
            cnt++;//这里也要给计数器cnt++
        }
        num++;//因为for循环里面的num++删除，还要每次递增，就要给每次输出素数时给num++
    }
    printf("\n");
    return 0;
}*/