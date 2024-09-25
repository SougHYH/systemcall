#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

#define PERMS 0644

char *filename = "newfile";

int main() {
    int fd;
    
    if((fd = open(filename,O_RDWR|O_CREAT,PERMS)) == -1) {
        printf("cannot create new file");
        exit(1);
    }
    exit(0);
}