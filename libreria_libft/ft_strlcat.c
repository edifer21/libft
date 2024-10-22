/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patferna <patferna@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-11 11:00:43 by patferna          #+#    #+#             */
/*   Updated: 2024-10-11 11:00:43 by patferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
  #include <stdlib.h>
  #include <string.h>
  #include <stdio.h>
  

size_t ft_strlcat(char *dest, const char *src, size_t size) 
{
    size_t lenc = strlen(src);
    size_t lend = strlen(dest);
    size_t i = 0;
    
    if (size <= lend)
    {
      return size +lenc;
    }
  
    while (src[i] != '\0' && lend +i < size -1)
    {
        dest[lend+i] = src[i];
        i++;
    }
    dest[lend + i] = '\0';
    return lend + lenc;

 }
 int main (void)
{
    char src[] = "dia 7 sin entregar";
    char dest[20] = "prueba";
    
    size_t len = ft_strlcat(dest, src, 15);
    printf("Contenido de dest: %s\n", dest);
    printf("Longitud de src: %s\n", src);
a
    return 0;
}