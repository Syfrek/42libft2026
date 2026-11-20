/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racornu <racornu@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-06 12:53:24 by racornu           #+#    #+#             */
/*   Updated: 2026-11-06 12:53:24 by racornu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_sign(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

static int	ft_nbrlen(int n)
{
	int	i;
	int	neg;

	neg = ft_sign(n);
	if (n == 0)
		return (1);
	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i + neg);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	nb;
	int				len;
	int				neg;

	neg = ft_sign(n);
	len = ft_nbrlen(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (neg)
		nb = (unsigned int)(-(n + 1)) + 1;
	else
		nb = (unsigned int)n;
	str[len] = '\0';
	while (len > neg)
	{
		str[len - 1] = (nb % 10) + '0';
		nb = nb / 10;
		len--;
	}
	if (neg)
		str[0] = '-';
	return (str);
}
