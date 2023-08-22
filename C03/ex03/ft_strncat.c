/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottet <ccottet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 09:57:06 by ccottet           #+#    #+#             */
/*   Updated: 2023/08/07 14:33:52 by ccottet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < nb)
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
    unsigned int nb = 2;
    char s1[128] = "completement";
    char s2[128] = "salut";
    char s3[128] = "completement";
    char s4[128] = "salut";
    printf("---strncat---\n%s\n",strncat(s1, s2, nb));
    printf("---ft_strncat---\n%s\n",ft_strncat(s3, s4, nb));
} */