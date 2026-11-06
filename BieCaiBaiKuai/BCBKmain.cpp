#include <graphics.h>
#include <stdio.h>
#define N 5
#include <time.h>
int Map[N];//定义一个数组，用于存储黑块的位置

int MapX,MapY,Score = 0;

//随机产生黑块的坐标
void initBlack(){
    for (int i = 0; i < N-1; i++)//只有四行，所以N-1
    {
        Map[i] = rand() % N;//任何数对五取余只可能是0-4，对应一行有五个格子，四个left top
        printf("%d\n",Map[i]);
    }
    
}

//根据随机存储在数组中的数据，产生黑块
void DrawBlack(){
    for (int i = 0; i < N - 1; i++)
    {
        fillrectangle(Map[i]*100,i*120,Map[i]*100+100,i*120+120);
    }
    
}

//绘制一个界面，用一个函数封装这个界面
void Draw(){
    BeginBatchDraw();

    cleardevice();//清屏

    setlinecolor(BLACK);
    setfillcolor(WHITE);
    for (int i = 0; i < 4; i++)//行
    {
        for (int j = 0; j < 5; j++)//列
        {
            
            fillrectangle(j*100,i*120,j*100+100,i*120+120);
        }
        
    }
    setfillcolor(BLACK);//这里全弄成黑的了，再从上边走下来就全黑了
    DrawBlack();//绘制黑色的方块
    EndBatchDraw();
}

//
bool Play(){
    MOUSEMSG msg;//定义变量存储鼠标消息
    msg = GetMouseMsg();//这个函数可以捕获鼠标消息

    switch (msg.uMsg)
    {
    case WM_LBUTTONDOWN://鼠标左键按下
        //接下来根据鼠标点击的坐标，计算出对应的下标
        MapY = msg.y / 120;//白块黑块的高度
        MapX = msg.x / 100;//白块黑块的宽度
        if (Map[3] == MapX&&MapY == 3)//Map[3]存储的是最下面的黑格子的列号
        {
            for (int i = 3; i > 0; i--)
            {
                Map[i] = Map[i-1];//是按照原来的往下移动一行的意思吗
            }
            Map[0] = rand() % N;//随机一个黑格子，补齐下移的空缺，所以加到第零行
            Score +=10;//每次产生一个新格子，都加十分
            printf("你点击到了黑块！\n");
        }
        else{
            printf("未点击到黑块！\n");
            return true;
        }
        break;
    }
    return false;
}

int main()
{
    srand((unsigned)time(NULL));//通过时间做随机数的种子，这啥意思？
    //1.创建页面，单位px
    //四行五列120*100的格子
    initgraph (500,480,SHOWCONSOLE);

    //fillrectangle(0,0,100,120);
    //绘制填充矩形，根据左上角left，top，和right，bottom绘制矩形
    //width :|left-right|.  height :|top-bottom|
    initBlack();//初始化格子的位置
    
    while (1)
    {
        Draw();//绘制界面中的方块
        if (Play())
        {   
            char str[128];
            sprintf(str,"总计消除格子%d个，总计得分：%d",Score/10,Score);
            MessageBoxA(GetHWnd(),str,"Game Over",MB_OK);//这里还不行，DeepSeek说还得把 MessageBox 改成 MessageBoxA（A代表 ANSI/ASCII），这样它就能直接接受普通的 char 字符串了
        }
        
    }
    
    //卡屏
    getchar ();

    return 0;
}

/*
总结：这把主要是跟着网上的教程做的，大多数都没学过，有些问题还得问DeepSeek
1.最开始还下了一个EasyX，把绘图库给整好
2.主要我感觉这里是用一个定义函数的方法把它封装了，感觉比较高级，看起来简介得多
3.65行那个往下移动的我觉得思路挺好的
4.整个获取鼠标点击信息的方法吧，定位的算法也听到容易理解的，对除以100，转化成小一点的整数来定位
5.还有好多感觉真的还没怎么学，先跟着做吧
*/