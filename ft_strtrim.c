/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwubneh <mwubneh@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 02:11:41 by mwubneh           #+#    #+#             */
/*   Updated: 2022/11/26 03:00:49 by mwubneh          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*s1cpy;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	if (*s1 == '\0')
		return (calloc(1, sizeof(char )));
	s1cpy = s1;
	while (*s1)
		s1++;
	s1--;
	while (ft_strchr(set, *s1))
		s1--;
	return (ft_substr(s1cpy, 0, s1 - s1cpy + 1));
}
