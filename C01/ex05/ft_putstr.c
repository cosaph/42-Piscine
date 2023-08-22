/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottet <ccottet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 13:14:03 by ccottet           #+#    #+#             */
/*   Updated: 2023/08/05 15:50:00 by ccottet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0' )
	{
		write(1, str, 1);
		str ++;
	}
}

/* int main(void)
{
    char *test = "hello, world!";
    ft_putstr(test);
}  */