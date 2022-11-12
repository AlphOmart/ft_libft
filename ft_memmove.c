/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwubneh <mwubneh@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:30:00 by mwubneh           #+#    #+#             */
/*   Updated: 2022/11/12 14:32:52 by mwubneh          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void	*dst, const void	*src, size_t	n)
{
	int		i;
	char	*dst2;
	char	*src2;

	i = 0;
	dst2 = (char *) dst ;
	src2 = (char *) src;
	while (i < n)
		dst2[i] = src2[i++];
	return (dst);
}
