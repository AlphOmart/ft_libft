/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwubneh <mwubneh@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:17:45 by mwubneh           #+#    #+#             */
/*   Updated: 2022/11/08 15:08:40 by mwubneh          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	i--;
	while (i <= 0 && str[i] != c)
		i--;
	if (str[i] == c)
		return (str[i]);
	else
		return (0);
}
