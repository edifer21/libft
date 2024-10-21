/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patferna <patferna@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-26 11:00:27 by patferna          #+#    #+#             */
/*   Updated: 2024-09-26 11:00:27 by patferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memset(void *dest, int c, size_t n)
{
	int				i;
	unsigned char	*ptr;

	ptr = (unsigned char *) dest;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return ((void *)dest);
}
/*
int	main(void)
{
	size_t			n;
	unsigned char	c;
	char			dest[] = "Estoy en 42 Madrid!";

	c = 'a';
	n = 5;
	ft_memset (dest, c, n);
	printf("%s\n", dest);
	return (0);
}
*/
