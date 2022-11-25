#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <wait.h>
#include <sys/types.h>
int main ()
{

	printf("i am before exec call\n");
	execlp("ls", "ls","-l",NULL);
	printf("i am after exec call\n");
	
return 0;
}
