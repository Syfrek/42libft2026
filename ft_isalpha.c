/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racornu <racornu@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-02 10:10:31 by racornu           #+#    #+#             */
/*   Updated: 2026/11/02 11:19:08 by racornu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
		return (1);
	else
		return (0);
}
/*#include <stdio.h>
int main(void)
{
	int c = 'J';
	int result = ft_isalpha(c);
	printf("ft_isalpha('%c') = %d\n", c, result);
	return 0;
}
*/