/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:27:07 by amalbrei          #+#    #+#             */
/*   Updated: 2022/02/13 17:34:37 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*t;
	size_t			i;
	size_t			j;

	i = start;
	j = 0;
	t = (char *)malloc(sizeof(char) * (len + 1));
	if (!t || !s)
		return (0);
	if (start >= ft_strlen(s))
	{
		t[j] = 0;
		return (t);
	}
	while (i < ft_strlen(s) && j < len)
		t[j++] = s[i++];
	t[j] = '\0';
	return (t);
}
