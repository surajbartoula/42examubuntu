#include <unistd.h>

int ft_atoi(char *str)
{
  int i = 0;
  int num = 0;
  while (str[i])
  {
    num = num * 10 + (str[i] - '0');
    i++;
  }
  return (num);
}

void ft_itoa(int n)
{
  char *symbols = "0123456789";
  if (n >= 10)
  {
    ft_itoa(n / 10);
  }
  write(1, &symbols[n % 10], 1);
}

int main(int argc, char *argv[])
{
  int i = 0;
  int index = 0;
  char *symbols = "123456789";
  int mult;
  if (argc == 2)
  {
    while (i < 9)
    {
      write(1, &symbols[i], 1);
      write(1, &" X ", 3);
      while (argv[1][index])
      {
        write(1, &argv[1][index], 1);
        index++;
      }
      index = 0;
      write(1, &" = ", 3);
      mult = (i + 1) * ft_atoi(argv[1]);
      ft_itoa(mult);
      write(1, &"\n", 1);
      i++;
    }
  } else
    write(1, &"\n", 1);
}
