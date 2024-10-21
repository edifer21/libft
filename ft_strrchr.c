/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstrrchr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patferna <patferna@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-14 13:48:16 by patferna          #+#    #+#             */
/*   Updated: 2024-10-14 13:48:16 by patferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <string.h>

char *ft_strrchr(const char *s, int c)
{
    int i;
    unsigned char a;
    int size;

    a = c;
    size = ft_strlen(s) ;
if (a == '\0') 
         {
         return(char *)&s[size];
         }
i = size - 1;

while  (i >= 0 )
    {
       if (s[i] == a)
        {
            return(char *)&s[i];
        }
         i--;
    }

    return (NULL);
}

int main (void)
{
    char text[] = "quedan 10 dias!!";
    //char * ptr;
    int  sele;
    
    sele = 'q';
    ft_strrchr (text, sele);

 }