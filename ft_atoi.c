/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racornu <racornu@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-03 15:43:37 by racornu           #+#    #+#             */
/*   Updated: 2026-11-03 15:43:37 by racornu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_sign(const char *str, int *i)
{
	int	sign;
	int	c;

	sign = 0;
	c = 1;
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			c *= -1;
		sign++;
		if (sign > 1)
			return (0);
		(*i)++;
	}
	return (c);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	j = 0;
	c = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		++i;
	c = ft_sign(str, &i);
	if (c == 0)
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		j = (j * 10) + (str[i] - '0');
		i++;
	}
	return (c * j);
}
