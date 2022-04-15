/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:20:41 by frrusso           #+#    #+#             */
/*   Updated: 2021/12/17 13:40:44 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	j = -1;
	while (s1 && s1[++j])
		str[j] = s1[j];
	i = -1;
	while (s2 && s2[++i])
		str[i + j] = s2[i];
	str[i + j] = '\0';
	return (str);
}

char	*ft_strjoin_free(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	j = -1;
	while (s1 && s1[++j])
		str[j] = s1[j];
	i = -1;
	while (s2 && s2[++i])
		str[i + j] = s2[i];
	str[i + j] = '\0';
	if (s1)
		free(s1);
	return (str);
}
