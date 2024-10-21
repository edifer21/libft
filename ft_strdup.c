/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patferna <patferna@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-18 15:29:34 by patferna          #+#    #+#             */
/*   Updated: 2024-10-18 15:29:34 by patferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

char *ft_strdup(const char *s)
{
    size_t len = strlen(s);
    char *s2; 
    char * ptr;

    ptr = (char*) malloc((len +1 )* sizeof(char));
    strlcpy(ptr,s,len +1);
    
return ptr;
}

int main (void)
{
    char s[] = "Me queda una semana ";

    ft_strdup(s);

}