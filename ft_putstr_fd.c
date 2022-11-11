/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwubneh <mwubneh@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 21:15:20 by mwubneh           #+#    #+#             */
/*   Updated: 2022/11/11 21:15:20 by mwubneh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void   ft_putstr_fd(char    *s, int fd)
{
    int i;

    i = 0;
    while(s[i])
        write(fd, &s[i++], 1);
}