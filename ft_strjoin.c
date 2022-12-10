/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 22:57:21 by osabir            #+#    #+#             */
/*   Updated: 2022/11/20 11:45:46 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		j;
	int		o;

	if (!s1 || !s2)
		return (NULL);
	str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (NULL);
	j = 0;
	o = 0;
	while (s1[j] != '\0')
		str[o++] = s1[j++];
	j = 0;
	while (s2[j] != '\0')
		str[o++] = s2[j++];
	str[o] = '\0';
	return (str);
}
