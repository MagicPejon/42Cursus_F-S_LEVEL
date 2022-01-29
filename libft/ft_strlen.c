/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:45:42 by amalbrei          #+#    #+#             */
/*   Updated: 2022/01/29 15:26:17 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

#include <stdio.h>

/*int main()
{
	char i[] = "Hello";
	printf("%ld", ft_strlen(i));
}*/
