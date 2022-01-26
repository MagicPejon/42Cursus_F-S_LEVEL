/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 17:21:02 by amalbrei          #+#    #+#             */
/*   Updated: 2022/01/26 17:30:15 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	void	*ptr;
	size_t	len;

	len = ft_strlen(s1);
	ptr = (const char *)malloc(sizeof(char) * len);
	if (ptr == NULL)
		return (NULL);
	while (s1)
		s1++ = ptr++;
	return (ptr);
}
