#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

#define BUFSIZE 512

int main() {
    char buf[BUFSIZE];
    int fd1;
    int fd2;
    size_t nread;

    fd1 = open("afile",O_RDONLY);
    fd2 = open("bfile",O_RDWR);

    while ((nread = read(fd1,buf,BUFSIZE))>0) {
        nread = write(fd2,buf,BUFSIZE);
    }
    close(fd1,fd2);
}