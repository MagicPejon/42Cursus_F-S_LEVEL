/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 15:43:44 by amalbrei          #+#    #+#             */
/*   Updated: 2022/02/13 17:32:39 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_d;
	size_t	len_s;

	i = ft_strlen(dst);
	j = 0;
	len_d = ft_strlen(dst);
	len_s = ft_strlen(src);
	if (dstsize == 0)
		return (len_s);
	while ((i + j) < dstsize - 1 && src[j])
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	if (dstsize > len_d)
		return (len_s + len_d);
	return (len_s + dstsize);
}

/*#include<string.h>

int main()
{
	char *dest;
	dest = (char *)malloc(sizeof(*dest) * 15);
	memset(dest, 'r', 15);
	printf("%lu\n", ft_strlcat(dest, "lorem ipsum dolor sit amet", 5));
	write(1, "\n", 1);
	write(1, dest, 15);

	char test1[] = "rrrrrrrrrrrrrrr";
	char test2[] = "lorem ipsum dolor sit amet";
	char test3[] = "rrrrrrrrrrrrrrr";
	char test4[] = "lorem ipsum dolor sit amet";

	printf("%lu\n", ft_strlcat(test1, "lorem ipsum dolor sit amet", 5));
	printf("|%s|\n", test1);
	printf("%lu\n", strlcat(test3, "lorem ipsum dolor sit amet", 5));
	printf("|%s|\n", test3);
}*/
