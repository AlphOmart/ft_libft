/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwubneh <mwubneh@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:43:56 by mwubneh           #+#    #+#             */
/*   Updated: 2022/11/12 13:52:35 by mwubneh          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	int		i;
	char	*dst2;
	char	*src2;

	i = 0;
	dst2 = (char *) dst;
	src2 = (char *)src;
	while (i <= n)
		dst2[i] = src2[i++];
	return	(dst);
}
