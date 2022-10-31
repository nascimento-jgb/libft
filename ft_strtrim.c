/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:06:16 by jonascim          #+#    #+#             */
/*   Updated: 2022/10/31 15:48:55 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *s2)
{
	const char	*start;
	const char	*end;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	start = s1;
	end = s1 + ft_strlen(s1);
	while(ft_strchr(s2, *start))
		++start;
	while(ft_strchr(s2, *end))
		--end;
	return(ft_substr(s1, start - s1, end - start + 1));
}
