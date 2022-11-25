#include <stdio.h>
#include <unistd.h> /* contains fork prototype */
int main(void)
{
pid_t pid;
printf("I am the parent process and pid is : %d.\n",getpid());
printf("Here I am before use of forking\n"); 
pid = fork(); //new process is created
printf("Here I am just after forking\n"); //Child process will start execution from this line
if (pid == 0)
{
printf("I am the child process and pid is :%d.\n",getpid());
printf("I am loading process\n");
execl("first","first",NULL);
}
else
printf("I am the parent process and pid is: %d.\n",getpid());
return 0;
}

