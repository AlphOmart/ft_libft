/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwubneh <mwubneh@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:59:03 by mwubneh           #+#    #+#             */
/*   Updated: 2022/11/08 17:08:55 by mwubneh          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void	*b, int c, size_t len)
{
	int	i;

	i = 0;
	while (i < len)
		((char *)b)[i++] = c ;
	return (b);
}