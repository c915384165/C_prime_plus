/* prntval.c */
#include <stdio.h>
int main()
{
	int bph2o = 212;
	int rv;

	rv = printf("%d F is water's boiling point.\n", bph2o);
	rv = printf("123 \n");
	printf("%d\n", rv);

	return 0;
}