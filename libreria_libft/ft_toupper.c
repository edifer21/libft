/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patferna <patferna@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-14 09:58:17 by patferna          #+#    #+#             */
/*   Updated: 2024-10-14 09:58:17 by patferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <stdio.h>
 int ft_toupper(int c)
 {
    // la funcion primero verifica si el caracter es minuscula
    // despues lo convierte a  mayuscyla
    if  (c >= 'a' && c <= 'z' )
    {
        return  c - 32;
    }
    return c;
 
 }
  int main (void)
 {
   int c;
   c = 'z';
  ft_toupper (c);
  char a = c;
 
  printf("%c\n",a);


}