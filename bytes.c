#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

#define BUFSIZE 512

int main() {
    char buf[BUFSIZE];
    int fd;
    size_t nread;
    long total = 0;

    fd = open("testfile", O_RDONLY);

    while ((nread = read(fd, buf, BUFSIZE))>0) {
        total += nread;
    }
    close(fd);
    printf("%ld\n", total);

}