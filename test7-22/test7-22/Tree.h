#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

typedef int BTDataType;
typedef struct BinaryTreeNode
{
	int data;
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
}BTNode;

//获取新节点
BTNode* BuyNode(BTDataType x);

//前序遍历
void PreOrder(BTNode* root);

//中序遍历
void InOrder(BTNode* root);

//后序遍历 
void PostOrder(BTNode* root);

// ⼆叉树结点个数
int BinaryTreeSize(BTNode* root);

// ⼆叉树叶⼦结点个数
int BinaryTreeLeafSize(BTNode* root);

// ⼆叉树第k层结点个数
int BinaryTreeLevelKSize(BTNode* root, int k);

//⼆叉树的深度/⾼度
int BinaryTreeDepth(BTNode* root);

// ⼆叉树查找值为x的结点
BTNode* BinaryTreeFind(BTNode* root, BTDataType x);

// ⼆叉树销毁
void BinaryTreeDestory(BTNode** root);

//层序遍历
void LevelOrder(BTNode* root);

//判断二叉树是否为完全二叉树
bool BinaryTreeComplete(BTNode* root);
