/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racornu <racornu@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-03 14:04:05 by racornu           #+#    #+#             */
/*   Updated: 2026-11-03 14:04:05 by racornu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	value;

	i = 0;
	value = (unsigned char)c;
	while (s[i])
		i++;
	if ((unsigned char)s[i] == value)
		return ((char *)&s[i]);
	while (i > 0)
	{
		i--;
		if ((unsigned char)s[i] == value)
			return ((char *)&s[i]);
	}
	return (NULL);
}
