#include <fcntl.h>
#include <unistd.h>

int main(int argc, char **argv) {
    int fd;
    int len;

    if (argc != 3) {
        if (write(2, "Usage: ./ft_writefile <filename> \"<data>\"\n", 42) ==
            -1) {
            return 1;
        }
        return 1;
    }

    fd = creat(argv[1], S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
    if (fd < 0)
        return 1;

    len = 0;
    while (argv[2][len] != '\0')
        len++;

    if (write(fd, argv[2], len) < 0) {
        close(fd);
        return 1;
    }

    close(fd);
    return 0;
}
