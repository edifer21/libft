/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patferna <patferna@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-20 14:46:15 by patferna          #+#    #+#             */
/*   Updated: 2024-09-20 14:46:15 by patferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isascii(int a)
{
	if (a >= 00 && a <= 255)
		return (1);
}
/*
int	main(void)
{
	int	a;
    a = 'ö';

	ft_isascii (a);

	//se implementa como macro
}
*/