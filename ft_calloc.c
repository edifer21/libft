/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patferna <patferna@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-18 11:43:59 by patferna          #+#    #+#             */
/*   Updated: 2024-10-18 11:43:59 by patferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    void * ptr;

    if (nmemb == 0 || size == 0)
        return (malloc(0));
        //malloc0
        
    ptr = malloc(nmemb * size);
    if (!ptr) {
        return (NULL);
    }
    ft_bzero(ptr, (nmemb * size));
    
    return (ptr); 
}
/*
int main (void)
{
    int n_cell;
    int inside_cell;

    n_cell= 5;
    inside_cell = sizeof(int);

    ft_calloc(n_cell,inside_cell);
}
*/