/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottet <ccottet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 10:52:38 by ccottet           #+#    #+#             */
/*   Updated: 2023/08/07 14:38:00 by ccottet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	t_d;
	unsigned int	t_s;

	i = ft_strlen(dest);
	j = 0;
	t_d = ft_strlen(dest);
	t_s = ft_strlen(src);
	if (size < 1)
		return (t_s + size);
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < t_d)
		return (t_s + size);
	else
		return (t_d + t_s);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/* #include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <bsd/string.h>
int main(int argc, char **argv)
{
	(void)argc;
	char *s1 = strdup(argv[1]);
	char *s2 = strdup(argv[2]);
	char *s3 = strdup(argv[1]);
	char *s4 = strdup(argv[2]);
	int    ret1;
	int ret2;

	printf("----ft_strlcat----\n");
	printf("Depart :\ns1 = %s\ns2 = %s\n", s1, s2);
	ret1 = ft_strlcat(s1, s2, 3);
	printf("Appel a la fonction\n");
	printf("s1 = %s\ns2 = %s\nret = %d\n", s1, s2, ret1);
	printf("\n----strlcat----\n");
	printf("Depart :\ns1 = %s\ns2 = %s\n", s3, s4);
	ret2 = strlcat(s3, s4, 3);
	printf("Appel a la fonction\n");
	printf("s1 = %s\ns2 = %s\nret = %d", s3, s4, ret2);
} */