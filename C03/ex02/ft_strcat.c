/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottet <ccottet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 09:27:37 by ccottet           #+#    #+#             */
/*   Updated: 2023/08/07 14:27:42 by ccottet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/* #include <string.h>
#include <stdio.h>
int main(void)
{
    char s1[128] = "completement";
    char s2[128] = " chokbar ";
    char s3[128] = "completement";
    char s4[128] = " chokbar ";
    printf("---strcat---\n%s\n",strcat(s1, s2));
    printf("---ft_strcat---\n%s\n",ft_strcat(s3, s4));
} */