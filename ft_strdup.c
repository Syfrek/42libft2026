/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racornu <racornu@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-04 12:02:53 by racornu           #+#    #+#             */
/*   Updated: 2026-11-04 12:02:53 by racornu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*new;
	int		i;

	i = 0;
	if (src == NULL)
		return (NULL);
	new = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!new)
		return (NULL);
	while (src[i])
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

/*
#include <stdio.h>

int	main(int ac, char **av)
{
	char	*prem;
	char	*deux;

	if (ac == 2)
	{
		prem = ft_strdup(av[1]);
		deux = strdup(av[1]);
		printf(":%s:\n:%s:\n", prem, deux);
	}
	return (0);
}
*/