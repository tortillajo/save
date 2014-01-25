/*
** my.h for  in /home/bauwen_j/rendu/lib
** 
** Made by bauwen_j
** Login   <bauwen_j@epitech.eu>
** 
** Started on  Sat Jan 25 14:46:46 2014 bauwen_j
** Last update Sat Jan 25 14:46:46 2014 bauwen_j
*/

#ifndef MY_H_
# define MY_H_

typedef struct	s_circle
{
  char *data;
  struct s_circle *next;
  struct s_circle *prev;
}		t_circle;

void		my_putchar(char c);
void		my_putstr(char *str);
int		my_strlen(char *str);
void		my_put_nbr(int nb);
void		my_swap(int *a, int *b);
int		my_getnbr(char *str);
int		my_getnbr_base(char *str, char *base);
char		*my_strcat(char *str1, char *str2);
void		my_putnbr_base(int nb, char *base);
char		**my_sort_wordtab(char *str, char c);
t_circle	*circle_list(char **tab);

#endif /* !MY_H_ */
