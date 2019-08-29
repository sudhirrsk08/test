#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

int main()
{
	int pid,ppid;
	printf("i am the process in execution");
	pid=getpid();
	ppid=getppid();
	printf("process id%d\n",pid);
	printf("parent pid%d\n",ppid);
getchar();
	return 0;
}
