#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main() {
    int filedes;
    char fname[] = "afile";

    if ((filedes = open(fname, O_RDWR) == -1)) {
        printf("%s cannot be opened\n",fname);
    }
    else{
        printf("%d\n",filedes);
    }
    close(filedes);
    return 0;
}