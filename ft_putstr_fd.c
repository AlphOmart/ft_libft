# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    fr_                                                :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mwubneh <mwubneh@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/11 20:39:40 by mwubneh           #+#    #+#              #
#    Updated: 2022/11/11 20:39:40 by mwubneh          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

void   ft_putstr_fd(char    *s, int fd)
{
    int i;

    i = 0;
    while(s[i])
        write(fd, s[i++], 1);
}