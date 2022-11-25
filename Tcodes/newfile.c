#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
int main()
{

	printf("i am before exec call\n");
	execl("first.out","first.out" ,NULL);
	printf("i am after exec call\n");
return 0;
}
