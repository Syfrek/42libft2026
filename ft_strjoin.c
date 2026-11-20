/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: racornu <racornu@student.42.fr>            #+#  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2026-11-06 09:24:37 by racornu           #+#    #+#             */
/*   Updated: 2026-11-06 09:24:37 by racornu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (len1 > (size_t)-1 - len2 || len1 + len2 == (size_t)-1)
		return (NULL);
	result = malloc(len1 + len2 + 1);
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, len1 + 1);
	ft_strlcat(result, s2, len1 + len2 + 1);
	return (result);
}

/*#include <stdio.h>
int	main(void)
{
    char *s1 = "Hello, ";
    char *s2 = "World!";
    char *result = ft_strjoin(s1, s2);
    if (result)
    {
        printf("%s\n", result);
        free(result);
    }
    return (0);
}
*/
