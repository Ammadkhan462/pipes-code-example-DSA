#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <wait.h>
#include <sys/types.h>
int main ()
{
	int fd[2];
	pipe (fd);
	if(fork()==0)//child
	{
		printf("hi i am child\n");
		char arr[10];
		int n =read(fd[0],arr,10);
		//write(1,arr,n);
		printf("%s",arr);
		close(fd[1]);
		
	}
	else 
	{
		close(fd[0]);
		printf("hi i am parents\n");
		write (fd[1],"hello\0",6);
		wait(NULL);
		printf("remaining code of 		parent\n");
	}
	

return 0;
}
