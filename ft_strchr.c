/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racornu <racornu@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-03 13:36:42 by racornu           #+#    #+#             */
/*   Updated: 2026-11-03 14:36:42 by racornu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	value;

	i = 0;
	value = (unsigned char)c;
	while (s[i] && (unsigned char)s[i] != value)
		i++;
	if ((unsigned char)s[i] == value)
		return ((char *)&s[i]);
	return (NULL);
}
