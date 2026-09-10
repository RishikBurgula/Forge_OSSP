#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>//header file for wait or waitpid
#include<stdlib.h>//header file for exit()
int main(){
int pid[3];
for(int i=0;i<3;i++){
pid[i]=fork();
if(pid[i]==0){
printf("Chid %d pid=%d\n",i+1,getpid());
sleep(i+1);
exit(0);
}
}wait(NULL);
printf("Parent: One child is completed with wait()\n");
waitpid(pid[2],NULL,0);
printf("Parent: child 3 is completed with waitpid()\n");
wait(NULL);
printf("Parent: All the childs are completed\n");
}
