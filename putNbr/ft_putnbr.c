#include <unistd.h>

void ft_putchar(char c) {
  if (write(1, &c, 1) == -1) {
    return;
  }
}

void ft_putnbr(int nb) {
  if (nb == -2147483648) {
    if (write(1, "-2147483648", 11) == -1) {
      return;
    }
    return;
  }
  if (nb < 0) {
    ft_putchar('-');
    nb = nb * -1;
  }
  if (nb >= 0 && nb < 10) {
    ft_putchar(nb + '0');
  } else {
    ft_putnbr(nb / 10);
    ft_putnbr(nb % 10);
  }
}

int main(void) {
  if (write(1, "Test 1 : ", 9) == -1) {
    return 1;
  }
  ft_putnbr(50);
  if (write(1, "Test 2 : ", 9) == -1) {
    return 1;
  }
  ft_putnbr(2147483647);
  if (write(1, "Test 3 : ", 9) == -1) {
    return 1;
  }
  ft_putnbr(-2147483648);
  if (write(1, "Test 4 : ", 9) == -1) {
    return 1;
  }
  ft_putnbr(0);
  if (write(1, "Test 5 : ", 9) == -1) {
    return 1;
  }
  ft_putnbr(9092009);
  return 0;
}
