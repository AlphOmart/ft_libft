/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwubneh <mwubneh@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 22:45:51 by mwubneh           #+#    #+#             */
/*   Updated: 2022/12/02 10:29:31 by mwubneh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = ft_strlen(s);
	if (i < len)
		len = i + 1;
	if (s == NULL)
		return (NULL);
	if (i <= start)
		return (ft_strdup(""));
	s += start;
	i = 0;
	while (s && i < len)
		i++;
	str = malloc (sizeof (char) * (i + 1));
	if (str != NULL)
		ft_strlcpy(str, s, i + 1);
	return (str);
}
