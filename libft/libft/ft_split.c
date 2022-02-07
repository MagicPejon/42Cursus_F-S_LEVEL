/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:48:47 by amalbrei          #+#    #+#             */
/*   Updated: 2022/02/07 18:55:35 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(const char *s, char c)
{
	int		i;
	int		k;
	int		j;
	int		l;
	char	**str;

	i = 0;
	j = 0;
	k = 0;
	while (s[i] != c)
		i++;
	str[j] = ft_substr(s, 0, i);
	i++;
	j++;
	l = i;
	while (s[i])
	{
		i++;
		k++;
	}
	str[j] = ft_substr(s, l, k);
	return (str);
}
