/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+        +:+     */
/*   By: racornu <racornu@student.42.fr>            #+#  +:+      +#+        */
/*                                                +#+#+#+#+#+  +#+           */
/*   Created: 2026-11-06 09:25:49 by racornu           #+#    #+#             */
/*   Updated: 2026-11-06 09:25:49 by racornu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	result = (char *)malloc(end - start + 1);
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1 + start, end - start + 1);
	return (result);
}

/*int main(void)
{
    char *s1 = "   Hello, World!   ";
    char *set = " ";
    char *result = ft_strtrim(s1, set);
    if (result)
        printf("Chaine resultat: '%s'\n", result);
    return (0);
}
*/