/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwubneh <mwubneh@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:59:46 by mwubneh           #+#    #+#             */
/*   Updated: 2022/11/12 16:48:06 by mwubneh          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	char	*strcpy;

	i = 0;
	j = 0;
	strcpy = (char *) str;
	if (len <= 0)
		return (0);
	while (str[i] && i < len)
	{
		while (str[i + j] == to_find[j] && (i + j) < len)
		{
			j++;
			if (to_find[j] == '\0')
			{
				strcpy[0] = str[i];
				return (strcpy);
			}
		}
		i++;
	}
	return (0);
}
