#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include<time.h>
int main(){
int data;
int start,end;
int fd[2];
pipe(fd);
start=clock();
if(fork()==0){
close(fd[1]);
printf("Consumer\n");
for(int i=0;i<5;i++){
read(fd[0],&data,sizeof(data));
printf("Consumed %d\n",data);
}
close(fd[0]);
}
else{
close(fd[0]);
printf("Producer\n");
for(int i=1;i<=5;i++){
data=i * 10;
write(fd[1],&data,sizeof(data));
printf("Produced %d\n",data);
}
close(fd[1]);
wait(NULL);
end=clock();
double timetaken=(double)(end-start)/CLOCKS_PER_SEC;
printf("Comunication Time is %lf\n",timetaken);
double efficiency = (double)5/timetaken;
printf("Communication Efficieny is %lf\n",efficiency);
}
}
