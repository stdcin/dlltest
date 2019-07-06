#include <stdio.h>

#define VERSION 1.1

#ifdef __cplusplus
extern "C" {
#endif 

	__declspec(dllexport) int add(int x, int y);
	__declspec(dllexport) int sub(int x, int y);


#ifdef __cplusplus
}
#endif

int add(int x, int y)
{
	printf("add(%d, %d)\n", x, y);
	return x + y;
}

int sub(int x, int y)
{
	printf("sub(%d, %d)\n", x, y);
	return x - y;
}