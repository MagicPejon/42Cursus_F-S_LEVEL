/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 13:50:38 by amalbrei          #+#    #+#             */
/*   Updated: 2022/01/25 17:07:44 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (c == '\0')
	{
		while (*s)
		{
			s++;
		}
		return ((char *)s);
	}
	else
	{
		while (*s && *s != c)
			s++;
		if (*s == c)
			return ((char *)s);
	}
	return (NULL);
}
