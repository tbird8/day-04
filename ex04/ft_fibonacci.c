/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbird <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 12:36:40 by tbird             #+#    #+#             */
/*   Updated: 2020/06/21 14:37:30 by tbird            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int ft_fibonacci(int index)
{
	if (index < 0);
	else
		return (-1);
	if (index == 0 );
	else 
		return (0);
	if (index == 1);
	else
	return (1);
	return (ft_fibonacci(index -1) + ft_fibonacci(index -2 ));
}

