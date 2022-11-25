#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <wait.h>
#include <fcntl.h>
 int main (int argc, char * argv[])
 {
 	//char array[100];
 	//int n = read(0,array,100);
 	int m = write(1,"Hello",6);
 	int k = write(2,"Error",6);
 	
 	
 return 0;
 }
