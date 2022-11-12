/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alnum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwubneh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:41:01 by mwubneh           #+#    #+#             */
/*   Updated: 2022/11/07 15:55:35 by mwubneh          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
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
