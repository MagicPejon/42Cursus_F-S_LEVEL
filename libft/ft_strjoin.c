/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 17:02:15 by amalbrei          #+#    #+#             */
/*   Updated: 2022/02/01 17:30:02 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		i;
	int		j;
	size_t	s1_size;
	size_t	s2_size;
	char	*str;

	i = 0;
	j = 0;
	s1_size = ft_strlen(s1);
	s2_size = ft_strlen(s2);
	str = malloc(sizeof(char) * ((s1_size + s2_size) + 1));
	if (str == NULL)
		return (str);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	return (str);
}
