#include <fcntl.h>
#include <unistd.h>

int main(int argc, char **argv) {
  int fd;
  ssize_t bytes;
  char buffer[4096];

  if (argc != 2) {
    write(1, "Usage: ./ft_readfile <filename>\n", 32);
    return (1);
  }

  fd = open(argv[1], O_RDONLY);
  if (fd < 0)
    return (1);

  while ((bytes = read(fd, buffer, sizeof(buffer))) > 0) {
    write(1, buffer, bytes);
  }

  close(fd);
  return (0);
}
