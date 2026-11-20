/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racornu <racornu@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-06 09:27:10 by racornu           #+#    #+#             */
/*   Updated: 2026-11-06 09:27:10 by racornu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbrmot(char const *s, char c)
{
	int	i;
	int	nbr2mot;

	nbr2mot = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			nbr2mot++;
		i++;
	}
	return (nbr2mot);
}

static void	ft_free(char **tab, int j)
{
	while (j > 0)
	{
		j--;
		free(tab[j]);
	}
	free(tab);
}

static char	*getmot(char const *str, char c, int *i)
{
	int		s;
	int		len;
	char	*mot;

	s = *i;
	len = 0;
	while (str[*i] && str[*i] != c)
	{
		(*i)++;
		len++;
	}
	mot = (char *)malloc(sizeof(char) * (len + 1));
	if (!mot)
		return (NULL);
	len = 0;
	while (s + len < *i)
	{
		mot[len] = str[s + len];
		len++;
	}
	mot[len] = '\0';
	return (mot);
}

static int	fill_tab(char const *s, char c, char **tab, int n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < n)
	{
		while (s[i] && s[i] == c)
			i++;
		tab[j] = getmot(s, c, &i);
		if (!tab[j])
		{
			ft_free(tab, j);
			return (0);
		}
		j++;
	}
	tab[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		n;

	if (!s)
		return (NULL);
	n = nbrmot(s, c);
	tab = malloc(sizeof(char *) * (n + 1));
	if (!tab)
		return (NULL);
	if (!fill_tab(s, c, tab, n))
		return (NULL);
	return (tab);
}

/*#include <stdio.h>

int	main(void)
{
	char	**tab;
	int		i;

	tab = ft_split("  Bonjour agougoug gagagg ggdgd  ", ' ');
	if (!tab)
		return (1);
	i = 0;
	while (tab[i])
	{
		printf("tab[%d] = %s\n", i, tab[i]);
		free(tab[i]);
		i++;
	}
	free(tab);
	return (0);
}
	*/