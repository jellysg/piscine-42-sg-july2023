/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergoh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 19:15:20 by jergoh            #+#    #+#             */
/*   Updated: 2023/08/16 19:15:21 by jergoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	init(t_op f[5])
{
	f[0] = add;
	f[1] = subtract;
	f[2] = multiply;
	f[3] = divide;
	f[4] = modulo;
}

t_bool	valid(char *op)
{
	if (ft_find_operator(*op, OPERATORS) >= 0 && !*(op + 1))
		return (TRUE);
	return (FALSE);
}

int	main(int argc, char *argv[])
{
	t_op	operation;
	t_op	operations[5];

	init(operations);
	if (argc == 4)
	{
		if (!valid(argv[2]))
		{
			ft_putstr("0\n");
			return (0);
		}
		if (valid(argv[2]) && *argv[2] == '/' && *argv[3] == '0')
			ft_putstr("Stop : division by zero");
		else if (valid(argv[2]) && *argv[2] == '%' && *argv[3] == '0')
			ft_putstr("Stop : modulo by zero");
		else
		{
			operation = operations[ft_find_operator(*argv[2], OPERATORS)];
			ft_putnbr(operation(ft_atoi(argv[1]), ft_atoi(argv[3])));
		}
		ft_putchar('\n');
	}
	else
		return (0);
	return (0);
}
