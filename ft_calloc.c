/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwubneh <mwubneh@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:10:29 by mwubneh           #+#    #+#             */
/*   Updated: 2022/11/12 14:32:58 by mwubneh          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*str;
	int		i;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (0);
	str = malloc(sizeof (nmemb) * size);
	if (str == NULL)
		return (str);
	while (i < size * nmemb)
		str[i++] = '\0';
	return (str);
}
