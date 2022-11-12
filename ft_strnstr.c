/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwubneh <mwubneh@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:59:46 by mwubneh           #+#    #+#             */
/*   Updated: 2022/11/08 15:08:04 by mwubneh          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char	*str1, const char *str2, int t)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (t <= 0)
		return (0);
	while (str1[i] && i < t)
	{
		while (str1[i + j] == str2[j] && (i + j) < t)
		{
			j++;
			if (str2[j] == '\0')
				return (&str1[i]);
		}
		i++;
	}
	return (0);
}
