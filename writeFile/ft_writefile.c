#include <fcntl.h>
#include <unistd.h>

int main(int argc, char **argv) {
  int fd;
  int len;

  if (argc != 3) {
    write(1, "Usage: ./ft_writefile <filename> \"<data>\"\n", 42);
    return (1);
  }

  fd = creat(argv[1], 0644);
  if (fd < 0)
    return (1);

  len = 0;
  while (argv[2][len] != '\0')
    len++;

  if (write(fd, argv[2], len) < 0) {
    close(fd);
    return (1);
  }

  close(fd);
  return (0);
}
