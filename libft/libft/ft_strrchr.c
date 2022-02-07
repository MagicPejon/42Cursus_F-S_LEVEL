/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 13:15:30 by amalbrei          #+#    #+#             */
/*   Updated: 2022/01/29 14:11:09 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	*tar;

	str = (char *) s;
	tar = NULL;
	while (*str)
	{
		if (*str == c)
			tar = str;
		str++;
	}
	if (tar == NULL && c != '\0')
		return (NULL);
	if (*str == c)
		return (str);
	else
		return (tar);
}

/*#include <stdio.h>
#include <string.h>

int main()
{
	char	test1[] = "hey there hei";
	int		c = '\0';

	printf("%s\n",ft_strrchr(test1, c));
	printf("%s\n",strrchr(test1, c));
}*/
