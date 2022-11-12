/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwubneh <mwubneh@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:30:00 by mwubneh           #+#    #+#             */
/*   Updated: 2022/11/12 12:30:22 by mwubneh          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void	*dest, const void	*src, size_t	n)
{
	int		i;
	char	*dest2;
	char	*src2;

	i = 0;
	dest2 = (char *) dest ;
	src2 = (char *) src;
	while (i < n)
		dest2[i] = src2[i++];
	return (dest);
}
