/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racornu <racornu@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-04 11:51:38 by racornu           #+#    #+#             */
/*   Updated: 2026-11-04 11:51:38 by racornu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	if (size != 0 && n > (size_t)-1 / size)
		return (NULL);
	str = malloc(n * size);
	if (!str)
		return (NULL);
	while (i < n * size)
	{
		str[i] = 0;
		i++;
	}
	return ((void *)str);
}
