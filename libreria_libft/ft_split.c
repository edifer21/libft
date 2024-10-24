/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patferna <patferna@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-23 10:46:25 by patferna          #+#    #+#             */
/*   Updated: 2024-10-23 10:46:25 by patferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *put_word(const char *start, const char *ptr)
{
    size_t len_word = ptr - start;
    char *arrstr = (char*) malloc((len_word + 1) * sizeof(char));
    if (!arrstr)
        return (NULL);
    strncpy(arrstr, start, len_word);
    arrstr[len_word] = '\0';
    return arrstr;
}
  int count_c( const char *s,  char c)
{
  int i;
  char const *ptr;
  ptr = s;
  
  i = 0;
    while (*ptr != '\0' )
    {
      if (*ptr == c)
      i++;
      ptr++;
    }
    i++;
     return i;
  
}
char **ft_split(char const *s, char c)
{
	char **arrstr;
    int b = 0;
    const char *ptr; 
    char const *start;

	ptr = s;
	start = ptr;
    arrstr = malloc((count_c(s,c) + 1) * sizeof(char*));
    if (!arrstr)
      return (NULL);
    while (*ptr != '\0')
    {
      if (*ptr == c)
      {
        arrstr[b] = put_word(start, ptr);
        if (!arrstr[b])
          return (NULL);
        b++;
        start = ptr + 1;
      }
     ptr++;
    }
    if (ptr != start) 
    {
        arrstr[b] = put_word(start, ptr);
        if (!arrstr[b])
            return (NULL);
        b++;
    }
    arrstr[b] = (NULL); 
    return arrstr;
}

int main (void)
{
    char ptr [] = "hola me quedan 6 dias";
    char a = ' ';
    ft_split (ptr, a);    
}
