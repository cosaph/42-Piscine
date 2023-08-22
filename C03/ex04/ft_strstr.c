/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottet <ccottet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 10:10:57 by ccottet           #+#    #+#             */
/*   Updated: 2023/08/07 14:36:05 by ccottet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	k;

	i = 0;
	while (str[i] != '\0')
	{
		k = 0;
		while (to_find[k] == str[i + k])
		{
			if (to_find[k + 1] == '\0')
			{
				return (str + i);
			}
			k++;
		}
		i++;
	}
	return (0);
}

/* #include <string.h>
#include <stdio.h>
int main()
{
	char to_find[10] = "hihihiha";
	char str[80] = "hihihiha";
	printf("strstr:   %s\n",strstr(str,to_find));
	printf("ft_strstr:%s\n",ft_strstr(str,to_find));
} */