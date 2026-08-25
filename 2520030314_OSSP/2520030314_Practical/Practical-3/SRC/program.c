#include<unistd.h>
#include<stdio.h>
int main(){
int pid;
pid=fork();
if(pid==0){
printf("Child Process\n");
printf("Child Process id is %d\n",getpid());
printf("Parent Process id is %d\n",getppid());
}
else if(pid>0){
printf("Parent Process\n");
printf("Parent Process id is %d\n",getpid());
printf("My Parent Process id is %d\n",getppid());
}
else
printf("Not successful");
}
