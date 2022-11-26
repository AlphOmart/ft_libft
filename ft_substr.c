/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwubneh <mwubneh@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 22:45:51 by mwubneh           #+#    #+#             */
/*   Updated: 2022/11/26 06:59:26 by mwubneh          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (str);
	ft_bzero(str, len);
	i = ft_strlen(s);
	if (i <= start)
		return (str);
	if (start < i)
		ft_strlcpy(str, &s[start], i - len + 1);
	return (str);
}
