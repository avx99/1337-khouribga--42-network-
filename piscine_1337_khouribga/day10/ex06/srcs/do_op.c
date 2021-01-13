/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oennaimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 03:10:53 by oennaimi          #+#    #+#             */
/*   Updated: 2019/09/11 03:18:25 by oennaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	positive_number;

	if (nb < 0)
	{
		ft_putchar('-');
		positive_number = nb * (-1);
	}
	else
	{
		positive_number = nb;
	}
	if (positive_number >= 10)
	{
		ft_putnbr(positive_number / 10);
	}
	ft_putchar((positive_number % 10) + 48);
}

int		detect_operation(char *operateur)
{
	if (operateur[1] != '\0')
		return (-1);
	if (operateur[0] == '+')
		return (0);
	if (operateur[0] == '-')
		return (1);
	if (operateur[0] == '*')
		return (2);
	if (operateur[0] == '/')
		return (3);
	if (operateur[0] == '%')
		return (4);
	return (-1);
}

int		bc(int a, int b, int operation)
{
	int	(*tab_op[5])(int, int);

	tab_op[0] = &ft_addition;
	tab_op[1] = &ft_subtraction;
	tab_op[2] = &ft_multiplication;
	tab_op[3] = &ft_division;
	tab_op[4] = &ft_modulo;
	return ((*tab_op[operation])(a, b));
}

int		main(int argc, char **argv)
{
	int	result;
	int	operator;

	if (argc != 4)
		return (0);
	operator = detect_operation(argv[2]);
	if (operator == -1)
	{
		write(1, "0\n", 2);
		return (0);
	}
	else if (operator == 3 && ft_atoi(argv[3]) == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	else if (operator == 4 && ft_atoi(argv[3]) == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	result = bc(ft_atoi(argv[1]), ft_atoi(argv[3]), operator);
	ft_putnbr(result);
	ft_putchar('\n');
	return (0);
}
