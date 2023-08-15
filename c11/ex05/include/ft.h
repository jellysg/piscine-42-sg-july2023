#ifndef FT_H
# define FT_H

# include <unistd.h>
# include "ft_boolean.h"

# define OPERATORS "+-*/%"

typedef	int	(*t_op)(int, int);

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_atoi(char *str);
int		ft_find_operator(char c, char *str);
void	ft_putnbr(int nbr);

int		add(int a, int b);
int		subtract(int a, int b);
int		multiply(int a, int b);
int		divide(int a, int b);
int		modulo(int a, int b);

#endif
