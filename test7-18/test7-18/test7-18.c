#include "ListNode.h"

void test0()
{
	LTNode* plist = NULL;
	plist = LTInit();
	LTPushStart(plist, 1);
	LTPushBack(plist, 1);
	LTPushBack(plist, 2);
	LTPushStart(plist, 6);
	LTPushBack(plist, 3);
	LTPushBack(plist, 4);
	LTDeltStart(plist);
	LTDeltBack(plist);
	LTDeltDesBack(LTFind(plist,1),plist);
	LTInserDesBack(LTFind(plist, 3), 4);
	PrintLTNode(plist);
	DestoLTN(plist);
	plist = NULL;
}


int main()
{
	test0();
	return 0;
}