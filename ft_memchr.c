/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patferna <patferna@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-15 11:50:22 by patferna          #+#    #+#             */
/*   Updated: 2024-10-15 11:50:22 by patferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
   unsigned char *ptr;
    ptr = (unsigned char *) s; 
    
    int i; 
    
    i = 0;
    while (i < n)
    {
        if (ptr[i] == (unsigned char)c)
        {
          return (void *)&ptr[i];
        }
        i++;
    } 
    return NULL;
    
}

int main (void)
{
    char str[] = "Help 4ayuda";
    int a ;
    size_t n;
    
    a = '4';
    n = 3;
    ft_memchr(str,a,n);
}