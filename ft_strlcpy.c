/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwubneh <mwubneh@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:44:21 by mwubneh           #+#    #+#             */
/*   Updated: 2022/11/08 13:03:29 by mwubneh          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char	*src,	char	*dst, unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (src[i] && i < n - 1)
		dst[i] = src[i++];
	dst[i] = '\0';
	i--;
	return (i);
}
