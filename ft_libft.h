/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libft.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 19:14:37 by marvin            #+#    #+#             */
/*   Updated: 2022/11/08 19:14:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
#define FT_LIBFT_H

#include <string.h>

int     ft_isalpha(int  c);
int     ft_isdigit(int  c);
int     ft_isalnum(int  c);
int     ft_isascii(int  c);
int     ft_isprint(int  c);
int     ft_strlen(const char    *str);
void    *ft_memset(void  *b, int c, size_t len);
void    ft_bzero(void   *b, size_t  n);
void    *ft_memcpy(void    *dst, const void*src, size_t n);
void    *ft_memmove(void   *dst,const void *src, size_t len);
size_t  ft_strlcpy(char    *dst, const char    *src, size_t size);
size_t  ft_strlcat(char    *dst, const char    *src, size_t size);
int     ft_toupper(int  c);
int     ft_tolower(int  c);




#endif