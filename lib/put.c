/*
** put.c for  in /home/bauwen_j/rendu/lib
** 
** Made by bauwen_j
** Login   <bauwen_j@epitech.eu>
** 
** Started on  Sat Jan 25 14:46:04 2014 bauwen_j
** Last update Sat Jan 25 14:46:04 2014 bauwen_j
*/

#include <unistd.h>

void    my_putchar(char c)
{
  write(1, &c, 1);
}

int     my_strlen(char *str)
{
  int   i;

  i = 0;
  while (str[i] != 0)
    i++;
  return (i);
}

void    my_putstr(char *str)
{
  write(1, str, my_strlen(str));
}

void    my_put_nbr(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = -nb;
    }
  if (nb > 9)
      my_put_nbr(nb / 10);
  my_putchar((nb % 10) + 48);
}

void	my_putnbr_base(int nb, char *base)
{
  int	i;

  if (nb < 0)
    {
      my_putchar('-');
      nb = -nb;
    }
  i = my_strlen(base);
  if (nb > i - 1)
    my_putnbr_base((nb / i), base);
  my_putchar(base[nb % i]);
}
