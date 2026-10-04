#include <unistd.h>

void ft_putchar(char c) {
    if (write(1, &c, 1) == -1)
        return;
}

int main() {
    char a = 'a';
    ft_putchar(a);
    return 0;
}
