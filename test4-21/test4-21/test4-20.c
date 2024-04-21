
/**********************************************
*		字符动画  base 1.0.1
***********************************************/


/***************** 头文件 ***************************/

#include <stdio.h>						//此文件中定义了C语言的一些重要函数
#include <string.h>						//此文件中定义了C_字符函数
#include <stdlib.h>						//此文件中定义了编译器中的一些特殊函数
#include <Windows.h>					//此文件中定义了系统窗口操作命令
#include <assert.h>						//断言

/****************************************************
函数名称：		gotoxy
函数参数：		int x, int y
返回类型：		void (NULL)
函数功能：		将光标位置移动到坐标x,y
****************************************************/
void gotoxy(int x, int y)
{
	COORD pos; pos.X = x - 1; pos.Y = y - 1;			//COORD  为 Windows.h 中定义的一个结构体
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

/***************************************************
函数名称：		main
函数功能：		程序入口
***************************************************/
int main()
{
	system("color f0");					//改变系统控制台前景色（黑色）、背景色（亮白色）
	long i;								//创建变量 i，用于存储（.txt）文件个数
	char FileName[100];					//创建数组 FileName[]，用于存储文件名称，文件名称最大不超过100个符号
	char hi[254000];					//这里是字符数组，用于存储从文件读取出的字符串
	FILE* in;							//定义一个FILE类型的结构体指针 in 

	system("C:\\Users\\ASUS\\Desktop\\字符动画.mp4");	//打开视频或音频文件，
	Sleep(3000);						//窗口等待3秒后输出，可视需求更改时间，单位毫秒

	//循环将.txt文件中的符号打印在控制窗口中，打印完接着打印下一个.txt文件
	//放幻灯片，Sleep()函数调节播放速度
	for (i = 1; i <= 999; i++)//i 的范围转换为(.txt)文件的个数
	{
		sprintf(FileName,
			"C:\\Users\\ASUS\\Desktop\\字符动画\\txtpicture\\(%ld).txt", i);

		in = fopen(FileName, "r");
		assert(in != NULL);		//断言结构体指针 in 不为空

		fread(hi, 1, 254000, in);//改 ,这是你一个TXT文件里的字符串. 

		printf("%s\n%d", hi, i);
		gotoxy(1, 1);			//每次打印完，将光标移动到最前面，使下次打印依然在开头开始打印
		Sleep(26);//等待27毫秒执行
		fclose(in);
	}
}