/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racornu <racornu@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-02 10:26:20 by racornu           #+#    #+#             */
/*   Updated: 2026-11-02 10:26:20 by racornu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*#include <stdio.h>
int main(void)
{
    int c = 'p';
    int result = ft_isdigit(c);
    printf("ft_isdigit('%c') = %d\n", c, result);
    return 0;
}
*/