/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwubneh <mwubneh@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:05:12 by mwubneh           #+#    #+#             */
/*   Updated: 2022/11/25 16:01:47 by mwubneh          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
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
