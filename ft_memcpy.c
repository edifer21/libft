/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patferna <patferna@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-30 09:56:31 by patferna          #+#    #+#             */
/*   Updated: 2024-09-30 09:56:31 by patferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t	i;
	 unsigned char *ptd;
	 unsigned char *pts;
	
	ptd = ( unsigned char *) dest;
	pts = ( unsigned char *) src;

	i = 0;
	while (i < n)
	{
		ptd[i] = pts[i];
		i++;
	}
	return ((void *)dest);

}

int main (void)
{
    char src[] = "Quedan tres dias para terminar el proyecto";
    size_t	n;

	n = 6;
    ft_memcpy(src + 4, src, n);
}
// no usar unsigned 