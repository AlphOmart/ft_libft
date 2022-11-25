/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwubneh <mwubneh@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:43:56 by mwubneh           #+#    #+#             */
/*   Updated: 2022/11/25 16:48:05 by mwubneh          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*dst2;
	char		*src2;

	i = 0;
	dst2 = (char *) dst;
	src2 = (char *) src;
	ft_bzero(dst2, n+1);
	while (i < n)
	{
			dst2[i] = src2[i];
			i++;
	}
	return (dst);
}
