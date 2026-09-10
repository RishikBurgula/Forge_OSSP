#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
int main(){
int pid=fork();
mkfifo("FIFO1",0666);
if(pid>0){
int fd=open("FIFO1",O_WRONLY);
dup2(fd,1);
execlp("ls","ls","-l",NULL);
}
if(pid==0){
int fd=open("FIFO1",O_RDONLY);
dup2(fd,0);
execlp("grep","grep",".c",NULL);
}
}
