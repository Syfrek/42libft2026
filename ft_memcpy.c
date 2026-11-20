/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racornu <racornu@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-02 13:17:22 by racornu           #+#    #+#             */
/*   Updated: 2026-11-02 13:17:22 by racornu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*str;
	unsigned char	*strs;
	size_t			i;

	str = (unsigned char *)dest;
	strs = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		str[i] = strs[i];
		i++;
	}
	return (dest);
}
