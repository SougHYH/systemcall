#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <error.h>

char buf1[] = "abcdefghij";
char buf2[] = "ABCDEFGHIJ";

int main() {
    int fd;

    fd = creat("file.hole",S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
    write(fd,buf1,10);
    lseek(fd,40,SEEK_SET);
    write(fd,buf2,10);
}