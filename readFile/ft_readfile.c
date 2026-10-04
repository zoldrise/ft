#include <fcntl.h>
#include <unistd.h>

int main(int argc, char **argv) {
    int fd;
    ssize_t bytes;
    char buffer[4096];

    if (argc != 2) {
        if (write(2, "Usage: ./ft_readfile <filename>\n", 32) == -1) {
            return 1;
        }
        return 1;
    }

    fd = open(argv[1], O_RDONLY);
    if (fd < 0)
        if (write(2,
                  "Error: Couldn't open the file, file doesn't exist or "
                  "permissions are too low.\n",
                  78) == -1) {
            return 1;
        }

    while ((bytes = read(fd, buffer, sizeof(buffer))) > 0) {
        if (write(1, buffer, bytes) == -1) {
            return 1;
        }
    }

    close(fd);
    return 0;
}
