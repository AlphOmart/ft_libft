/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwubneh <mwubneh@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:30:00 by mwubneh           #+#    #+#             */
/*   Updated: 2022/11/11 18:30:00 by mwubneh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memmove(void    *dest, const void   *src, size_t    n)
{
    int i;

    i = 0;
    while (i < n)
        (char *) dest[i] = (char *) src[i++];
    return (dest);
}
