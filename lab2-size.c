#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

#define BUFSIZE 1024

int main() {
    int fd;
    char buf[BUFSIZE];
    size_t nread;

    fd = open("test.txt",O_RDWR);

    //10바이트 앞으로 이동
    lseek(fd,10,SEEK_SET); 
    while ((nread = read(fd,buf,BUFSIZE))>0) {
        write(STDOUT_FILENO,buf,nread);
    }
    printf("\n");
    //파일의 끝에서 5바이트 앞으로 이동
    lseek(fd,-5,SEEK_END);
    while ((nread = read(fd,buf,BUFSIZE))>0) {
        write(STDOUT_FILENO,buf,nread);
    }    
    
    close(fd);
}