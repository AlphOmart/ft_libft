/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwubneh <mwubneh@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:30:00 by mwubneh           #+#    #+#             */
/*   Updated: 2022/11/25 22:07:58 by mwubneh          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void	*dst, const void	*src, size_t	n)
{
	char	*start;

	start = (char *)dst;
	if (src < dst)
		ft_memcpy(dst, src, n);
	else if (dst < src)
		while (n--)
			*(unsigned char *)dst++ = *(unsigned char *)src++;
	return (start);
}
