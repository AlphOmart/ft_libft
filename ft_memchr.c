/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwubneh <mwubneh@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:42:44 by mwubneh           #+#    #+#             */
/*   Updated: 2022/11/12 14:32:54 by mwubneh          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	int		i;
	char	*s2;

	i = 0;
	s2 = (char *) s;
	while (i <= n && s2[i] != c)
		i++;
	if (s2[i] == c)
		return (s2[i]);
	else
		return (0);
}
