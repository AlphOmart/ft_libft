/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwubneh <mwubneh@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:17:45 by mwubneh           #+#    #+#             */
/*   Updated: 2022/11/12 16:51:48 by mwubneh          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*scpy;

	i = 0;
	scpy = (char *)s;
	while (s[i])
		i++;
	i--;
	while (0 <= i && *scpy != c)
	{
		i--;
		scpy--;
	}
	if (scpy[i] == c)
		return (scpy);
	else
		return (0);
}
