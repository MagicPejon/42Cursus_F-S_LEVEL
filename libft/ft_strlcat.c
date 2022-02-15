/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 15:43:44 by amalbrei          #+#    #+#             */
/*   Updated: 2022/02/15 17:43:10 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	j;
	size_t	len_d;
	size_t	len_s;

	j = 0;
	len_d = ft_strlen(dst);
	len_s = ft_strlen(src);
	if (dstsize <= len_d)
		len_s = dstsize + len_s;
	else
	{
		len_s = len_s + len_d;
		while (len_d < (dstsize - 1) && src[j])
		{
			dst[len_d] = src[j];
			j++;
			len_d++;
		}
		dst[len_d] = '\0';
	}
	return (len_s);
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
