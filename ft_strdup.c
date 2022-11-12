/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwubneh <mwubneh@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 20:10:31 by mwubneh           #+#    #+#             */
/*   Updated: 2022/11/12 14:28:23 by mwubneh          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*strdup(const char *s1)
{
	char	*str;
	int		size;
	int		i;

	size = 0;
	i = 0;
	while (s1[size])
		size++;
	str = malloc(size * sizeof(char));
	if (str == NULL)
		return (str);
	while (str[i])
		str[i] = s1[i++];
	str[i] = '\0';
	return (str);
}
