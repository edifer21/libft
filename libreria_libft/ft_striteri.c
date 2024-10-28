/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patferna <patferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:20:48 by patferna          #+#    #+#             */
/*   Updated: 2024/10/28 11:20:48 by patferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include<ctype.h>


 void my_touper(unsigned int i, char *c)
{
    if (c != NULL && islower(*c)) 
    {
        *c = (char)toupper(*c);
    }
}
void ft_striteri(char *s, void (*f)(unsigned int, char*)) 
{
   size_t i;
   size_t len;
   
    if (s == NULL || f == NULL) 
     {
        return;
     }
 
   i = 0;
   len = strlen(s);

   while (i < len)
   {
   f(i,&s[i]);
   i++;
   }
 }
 

int     main (void)
{
    char    ptr[] = "a, b, c, d";
    
  ft_striteri(ptr,my_touper);

}