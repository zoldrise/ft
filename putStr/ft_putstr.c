#include <unistd.h>

void ft_putstr(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (write(1, &str[i], 1) == -1) {
            return;
        }
        i++;
    }
}

int main() {
    ft_putstr("Hello World 123");
    return 0;
}
