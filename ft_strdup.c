/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwubneh <mwubneh@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 20:10:31 by mwubneh           #+#    #+#             */
/*   Updated: 2022/11/12 12:16:22 by mwubneh          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */



char	*strdup(const char *s)
{
	char	*str;
	int		size;
	int		i;

	size = 0;
	i = 0;
	while (s[size])
		size++;
	str = malloc(size * sizeof(char));
	if (str == NULL)
		return (str);
	while (str[i])
		str[i] = s[i++];
	str[i] = '\0';
	return (str);
}
