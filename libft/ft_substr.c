/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:27:07 by amalbrei          #+#    #+#             */
/*   Updated: 2022/02/09 18:55:16 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;
	size_t	j;

	new_str = (char *)malloc(len + 1);
	if (!s || !(new_str))
		return (0);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
		new_str[j++] = s[i++];
	new_str[j] = '\0';
	return (new_str);
}

/*char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*t;
	char			*s2;
	unsigned int	i;

	if (!s)
		return (NULL);
	i = 0;
	t = malloc(sizeof(char) * (len + 1));
	if (t == NULL)
		return (t);
	if (start >= ft_strlen(s))
	{
		t[i] = 0;
		return (t);
	}
	s2 = ft_strchr(s, s[start]);
	if (s2 == NULL)
		return (NULL);
	while (i < len)
	{
		t[i] = s2[i];
		i++;
	}
	t[i] = '\0';
	return (t);
}*/
