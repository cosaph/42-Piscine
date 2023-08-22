/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottet <ccottet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 10:04:35 by ccottet           #+#    #+#             */
/*   Updated: 2023/08/20 11:49:31 by ccottet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>
# define EVEN_MSG  "I have an even number of arguments.\n"
# define ODD_MSG   "I have an odd number of arguments.\n"
# define EVEN(x)   (x % 2 == 0)
# define SUCCESS    0
# define TRUE       1
# define FALSE      0

typedef int	t_bool;

#endif