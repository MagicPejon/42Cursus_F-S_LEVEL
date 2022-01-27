/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:28:54 by amalbrei          #+#    #+#             */
/*   Updated: 2022/01/26 15:28:50 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!needle[i])
		return ((char *) haystack);
	while (needle[i] && i < len)
	{
		if (needle[0] == haystack[i])
			j = i;
		while (needle[j] == haystack[j])
			j++;
		if (needle[j] == '\0')
			break ;
		else
		{
			j = 0;
			i++;
		}
	}
	if (i < len)
		return ((char *) haystack + i);
	else
		return (NULL);
}
