/* 第五章 除法 程序清单 5.6 divide.c */
#include "divide.h"

int divide_test(void)
{
	printf("%d\n", 5/4);
	printf("%d\n", 6/3);
	printf("%d\n", 7/4);
	printf("%d\n", 5/4);

	printf("%1.2f\n", 7./4);
	printf("%1.2f\n", 7./4);
	printf("%1.2f\n", -7.8/4);
	printf("%1.2f\n", +7.8/4);
	return 0;
}