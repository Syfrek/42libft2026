/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racornu <racornu@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-02 13:37:03 by racornu           #+#    #+#             */
/*   Updated: 2026-11-02 13:37:03 by racornu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*str;
	unsigned char	*strs;
	size_t			i;

	str = (unsigned char *)dest;
	strs = (unsigned char *)src;
	i = 0;
	if ((uintptr_t)dest < (uintptr_t)src)
	{
		while (i < n)
		{
			str[i] = strs[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i != 0)
		{
			i--;
			str[i] = strs[i];
		}
	}
	return (dest);
}
