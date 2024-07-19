#pragma once
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <assert.h>

typedef int STDataType;
typedef struct Stack
{
	STDataType* arr;
	int capacity;
	int top;
}Stack;

void STInit(Stack* ps);//栈的初始化

void DestoryST(Stack* ps);//栈的销毁

void STpush(Stack* ps, STDataType x);//栈数据的增加

void STDelt(Stack* ps);//栈数据的移除

STDataType EleSTop(Stack* ps);//取栈顶元素

int STSize(Stack* ps);//获取栈的有效元素个数

bool EmptyST(Stack* ps);//判断栈是否为空

