/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 17:44:12 by amalbrei          #+#    #+#             */
/*   Updated: 2022/02/01 18:51:34 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	int		i; 
	int		j; 
	char	*str;

	i = ft_strlen(s1);
	j = 0;
	while (set++)
	{
		while (s1++)
		{
			if (s1 == set)
			{
				ft_bzero(s1, 1);
				j++;
			}
		}
	}
	str = malloc(sizeof(char) * (i - j));
	while (i > 0)
	{
		if (s1[i] == 0)
		{
			i--;
			continue ;
		}
		str[i - j] = s1[i--];
	}
	str[j + 1] = '\0';
	return (str);
}
