/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwubneh <mwubneh@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 22:45:51 by mwubneh           #+#    #+#             */
/*   Updated: 2022/11/12 12:55:16 by mwubneh          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*s2;
	unsigned int		i;

	i = 0;
	s2 = malloc (sizeof (char) * len);
	if (s2 == NULL)
		return (NULL);
	while (len)
	{
		s2[i++] = s[start + i];
		len--;
	}
	return (&s2);
}
