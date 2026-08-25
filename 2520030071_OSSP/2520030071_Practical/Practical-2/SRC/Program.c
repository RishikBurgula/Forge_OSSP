#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main() {
    int fd1, fd2;
    char buf[100];
    ssize_t n;

    fd1 = open("open3.c", O_RDONLY);
    fd2 = open("z7", O_WRONLY | O_CREAT | O_TRUNC, 0644);

    if (fd1 < 0 || fd2 < 0) {
        printf("Error opening files\n");
        return 1;
    }

    printf("Files successfully opened\n");
    printf("%d\n", fd1);
    printf("%d\n", fd2);

    n = read(fd1, buf, sizeof(buf) - 1);
    buf[n] = '\0';

    printf("%s", buf);

    write(fd2, buf, n);

    close(fd1);
    close(fd2);

    printf("\nFile copied successfully\n");

    return 0;
}
