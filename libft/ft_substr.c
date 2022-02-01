/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:27:07 by amalbrei          #+#    #+#             */
/*   Updated: 2022/02/01 13:47:26 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*t;
	char			*s2;
	unsigned int	i;

	i = 0;
	t = malloc(sizeof(char) * (len + 1));
	if (t == NULL)
		return (t);
	s2 = ft_strchr(s, s[start]);
	while (i < len)
	{
		t[i] = s2[i];
		i++;
	}
	t[i] = '\0';
	return (t);
}