/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwubneh <mwubneh@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:42:44 by mwubneh           #+#    #+#             */
/*   Updated: 2022/11/12 16:30:50 by mwubneh          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	char	*s2;

	s2 = (char *) s;
	while (n-- && *s2 != c)
		s2++;
	if (*s2 == c)
		return (s2);
	else
		return (0);
}
