/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patferna <patferna@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-11 10:45:49 by patferna          #+#    #+#             */
/*   Updated: 2024-10-11 10:45:49 by patferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h> 
#include <stdio.h>
size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t i = 0;
    {
        //si size es cero busccar solucion 
        while (src[i] != '\0' && i < (size - 1))
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }

    while (src[i] != '\0')
    {
        i++;
    }

    return i;
}

int main (void)
{
    char src[] = "dia 7 sin entregar";
    char dest[10];

    size_t len = ft_strlcpy(dest, src, sizeof(dest));
    printf("Contenido de dest: %s\n", dest);
    printf("Longitud de src: %s\n", src);

    return 0;
}