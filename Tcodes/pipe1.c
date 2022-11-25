#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <wait.h>
#include <sys/types.h>

// ls      |    sort 
// parent	child
int main ()
{
	int fd[2];// fd[0], fd[1] 
	pipe (fd);
	if(fork()==0)//child fd[0],fd[1]
	{
		close(fd[1]);
		dup2(fd[0],0);
		execlp("sort","sort",NULL);
		
	}
	else //parent code for ls
	{
		close(fd[0]);
		dup2 (fd[1],1);
		execlp("ls","ls",NULL);	
		wait(NULL);
	}
	

return 0;
}
