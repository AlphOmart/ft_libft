/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwubneh <mwubneh@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:05:12 by mwubneh           #+#    #+#             */
/*   Updated: 2022/11/12 16:40:07 by mwubneh          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat( char	*src, char	*dst, unsigned int n)
{
	unsigned int	i;
	unsigned int	a;

	i = 0;
	a = 0;
	while (dst[i])
		i++;
	while (src[i] && a < n -1)
	{
		dst[i + a] = src[a];
		a++;
	}
	if (a == 1)
		dst[i + a] = '\0';
	return (a + i);
}
