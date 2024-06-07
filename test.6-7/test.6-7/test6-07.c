#include <stdio.h>
#include <stddef.h>
#define my_offsetof(s,m) ((size_t)&(((s*)0)->m))
#define change(n) (((n&0xaaaaaaaaa)>>1)+((n&0x555555555)<<1))

//struct s
//{
//	char i;
//	char n;
//	int o;
//	int m;
//}s;
//int main()
//{
//	int n = my_offsetof(struct s, m);
//	printf("%d\n", n);
//	return 0;
//}


int main()
{
	int n = 2;
	int c = change(n);
	printf("%d %d",n,c);
	return 0;
}