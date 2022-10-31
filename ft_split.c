/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:37:54 by jonascim          #+#    #+#             */
/*   Updated: 2022/10/31 18:16:29 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	len;
	size_t	aux;
	size_t	i;
	size_t	j;

	len = ft_strlen(s);
	aux = 0;
	i = 0;
	j = 0;
	split = (char **)malloc(sizeof(char) * 2);
	if (!split)
		return (NULL);
	while (aux < len && s[aux] != c)
		aux++;
	split[0] = (char *)malloc(sizeof(char) * (aux + 1));
	split[1] = (char *)malloc(sizeof(char) * (len - aux + 1));
	if (!split[0] || !split[1])
		return (NULL);
	while (i <= aux)
	{
		split[0][j] = s[i];
		i++;
		j++;
	}
	j = 0;
	while (i <= len)
	{
		split[1][j] = s[i];
		i++;
		j++;
	}
	return (split);
}
