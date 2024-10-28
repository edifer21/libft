/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patferna <patferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 08:03:37 by patferna          #+#    #+#             */
/*   Updated: 2024/10/28 08:03:37 by patferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* prueba para main 
char my_touper(unsigned int i, char c)
{
    (void)i; 
    return (char)toupper(c);
}
*/
 char   *ft_strmapi(char const *s, char (*f)(unsigned int, char))
 {
   size_t i;
   size_t len;
   
   i = 0;
   char *str;
   
   len = strlen(s);
   str = (char*)malloc(len +1);
     if (!str) 
      return NULL;
   while (i < len)
   {
   str[i] = f(i,s[i]);
   i++;
   }
   str[len]  = 0;
   return str;

 }
 
/*
int     main (void)
{
    char    ptr[] = "a, b, c, d";
    
    ft_strmapi(ptr,my_touper);

}*/