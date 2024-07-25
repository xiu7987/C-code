#include "Tree.h"

void test0()
{
	BTNode* node1 = BuyNode(1);
	BTNode* node2 = BuyNode(2);
	BTNode* node3 = BuyNode(3);
	BTNode* node4 = BuyNode(4);
	BTNode* node5 = BuyNode(5);
	BTNode* node6 = BuyNode(6);
	node1->left = node2;
	node1->right = node3;
	node2->left = node4;
	node3->left = node5;
	node2->right = node6;
	PreOrder(node1);
	printf("\n");
	InOrder(node1);
	printf("\n");
	PostOrder(node1);
	printf("\n");
	printf("Tree Size is %d\n", BinaryTreeSize(node1));
	printf("Tree LeafSize is %d\n", BinaryTreeLeafSize(node1));
	printf("第K层的结点 Tree Size is %d\n", BinaryTreeLevelKSize(node1,3));
	printf("Tree Depth is %d\n", BinaryTreeDepth(node1));
	printf("%s\n", BinaryTreeFind(node1, 10) == NULL ? "找不到" : "找到了");
	LevelOrder(node1);
	printf("\n");
	printf("%s\n", BinaryTreeComplete(node1) == false ? "非完全二叉树" : "完全二叉树");
	BinaryTreeDestory(&node1);
}

int main()
{
	test0();
	return 0;
}