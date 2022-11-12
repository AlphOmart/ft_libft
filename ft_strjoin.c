/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwubneh <mwubneh@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:44:51 by mwubneh           #+#    #+#             */
/*   Updated: 2022/11/12 16:39:19 by mwubneh          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*s3;

	i = ft_strlen(s1) + ft_strlen(s2);
	s3 = malloc(sizeof(char) * i);
	if (s3 == NULL)
		return (s3);
	i = 0;
	j = 0;
	while (s1[j++])
		s3[j] = s1[j];
	while (s2[i++])
		s3[j + i] = s2[i];
	s3[j + i] = '\0';
	return (s3);
}
