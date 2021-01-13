/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oennaimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 03:09:25 by oennaimi          #+#    #+#             */
/*   Updated: 2019/09/11 03:09:29 by oennaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int value_intger;
	int	signe;

	i = 0;
	value_intger = 0;
	signe = 1;
	if (str[0] == '\0')
		return (0);
	while (str[i] <= 32)
		i++;
	if (str[i] == '-')
	{
		signe = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		value_intger = value_intger * 10 + (str[i] - 48);
		i++;
	}
	return (value_intger * signe);
}
