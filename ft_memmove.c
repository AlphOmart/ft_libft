/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwubneh <mwubneh@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 18:13:31 by mwubneh           #+#    #+#             */
/*   Updated: 2022/12/17 18:13:35 by mwubneh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void	*dst, const void	*src, size_t	n)
{
	void	*start;

	start = dst;
	if (src < start)
		ft_memcpy(start, src, n);
	else if (start < src)
		while (n--)
			*(unsigned char *)start++ = *(unsigned char *)src++;
	return (dst);
}
