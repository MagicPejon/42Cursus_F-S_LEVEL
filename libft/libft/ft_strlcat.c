/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 15:43:44 by amalbrei          #+#    #+#             */
/*   Updated: 2022/02/03 11:05:37 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	len = 0;
	while (dst[i])
		i++;
	while (src[len])
		len++;
	if (dstsize <= i)
		len += dstsize;
	else
		len += i;
	while (i + 1 < dstsize && src[j])
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (len);
}

/*#include<stdio.h>
#include<string.h>

int main()
{

	char test1[] = "rrrrrrrrrrrrrrr";
	char test2[] = "lorem ipsum dolor sit amet";
	char test3[] = "rrrrrrrrrrrrrrr";
	char test4[] = "lorem ipsum dolor sit amet";

	printf("%lu\n", ft_strlcat(test1, "lorem ipsum dolor sit amet", 5));
	printf("|%s|\n", test1);
	printf("%lu\n", strlcat(test3, "lorem ipsum dolor sit amet", 5));
	printf("|%s|\n", test3);
}*/
