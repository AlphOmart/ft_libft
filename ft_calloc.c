/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwubneh <mwubneh@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:10:29 by mwubneh           #+#    #+#             */
/*   Updated: 2022/11/10 18:10:29 by mwubneh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_calloc(size_t   nmemb, size_t size)
{
    void    *str;
    int     i;

    i = 0;
    if (nmemb == 0 || size == 0)
        return (0);
    str = malloc(nmbeb *size);
    if (str == NULL)
        return(str);
    str = char* str;
    while (i < size * nmemb)
        str[i++] = '\0';
    return (str);

}