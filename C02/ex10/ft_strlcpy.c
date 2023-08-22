/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottet <ccottet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 10:21:59 by ccottet           #+#    #+#             */
/*   Updated: 2023/08/07 08:12:42 by ccottet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	res;

	i = 0;
	res = 0;
	while (src[res])
		res++;
	if (size < 1)
		return (res);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (res);
}

/* #include <string.h>
#include <stdio.h>

int main(){

	char str3[40] = "bonjour a tous";
	char str4[40];
	unsigned int j = ft_strlcpy(str4, str3, 25);
	printf("---ft_strlcpy---\n%s\nret:%d\n",str3,j);
} */