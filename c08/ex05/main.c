#include <stdio.h>
#include "ft_stock_str.h"

t_stock_str	*ft_strs_to_tab(int ac, char **av);
void	ft_show_tab(struct s_stock_str *par);

int main(int argc, char **argv)
{
  t_stock_str *tab;
	tab = ft_strs_to_tab(argc, argv);
	ft_show_tab(tab);
	for (int i = 0; i < argc; i++)
    free(tab[i].copy);
	free(tab);
	return (0);
}
