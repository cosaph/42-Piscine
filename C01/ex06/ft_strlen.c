/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottet <ccottet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:48:02 by ccottet           #+#    #+#             */
/*   Updated: 2023/08/03 13:30:41 by ccottet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}

/* #include <stdio.h>
int main(void)
{
    int len;
    char *test = "hello, world";

    len = ft_strlen(test);
    printf("len = %i\n", len);
}  */