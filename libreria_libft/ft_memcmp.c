/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patferna <patferna@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-15 12:41:17 by patferna          #+#    #+#             */
/*   Updated: 2024-10-15 12:41:17 by patferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char * ptr1;
    unsigned char * ptr2;

    ptr1 = (unsigned char *) s1;
    ptr2 = (unsigned char *) s2;

    int i = 0;
    while (i < n)
    {
        if (ptr1[i] != ptr2[i])
        {
            return (ptr1[i] - ptr2[i]);
        }
      i++;
    } 
    return (0);
}

int main (void)
{
    char str1[] = "sandia";
    char str2[] = "sandalia";
    size_t nu = 4;

    ft_memcmp(str1,str2,nu);
}