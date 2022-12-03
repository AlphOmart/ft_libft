/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwubneh <mwubneh@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 02:11:41 by mwubneh           #+#    #+#             */
/*   Updated: 2022/12/03 01:40:36 by mwubneh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s1cpy;
	int		i;
	int		j;
	int		k;

	if (set == NULL || s1 == NULL)
		return (ft_strdup(s1));
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while (i < j && ft_strchr(set, s1[j]))
		j--;
	s1cpy = malloc(sizeof(char) * (j - i + 2));
	if (s1cpy == NULL)
		return (NULL);
	k = -1;
	while (++k < j - i + 1)
		s1cpy[k] = s1[i + k];
	s1cpy[k] = 0;
	return (s1cpy);
}
