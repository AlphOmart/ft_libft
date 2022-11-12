/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alnum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwubneh <mwubneh@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:41:01 by mwubneh           #+#    #+#             */
/*   Updated: 2022/11/12 14:33:02 by mwubneh          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit( int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_isalpha( int b)
{
	if ('a' <= b && b <= 'z' || 'A' <= b && b <= 'Z')
		return (1);
	else
		return (0);
}

int	ft_alnum(int a)
{
	if (ft_isalpha(a) == 1 && ft_isdigit(a) == 1)
		return (1);
	else
		return (0);
}
