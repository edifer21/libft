/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patferna <patferna@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-22 09:47:25 by patferna          #+#    #+#             */
/*   Updated: 2024-10-22 09:47:25 by patferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char *ft_strtrim(char const *s1, char const *set)
{

}

int main (void)
{
    
}


#include <unistd.h>
#include <string.h>
#include <stdlib.h>

char *ft_strtrim(char const *s1, char const *set)
{
    size_t len_s1;
    size_t start = 0;
    
    // Longitud de la cadena original
    len_s1 = strlen(s1);
    int i = 0;
    
    // Recortar desde el inicio
    while (s1[i] != '\0' && strchr(set, s1[i]) != NULL)
    {
        i++;
    }
    start = i;  // Guardar el nuevo inicio

    // Recortar desde el final
    while (len_s1 > start && strchr(set, s1[len_s1 - 1]) != NULL)
    {
        len_s1--;
    }

    // Asignar memoria para la nueva cadena
    char *trimmed_str = (char *)malloc(sizeof(char) * (len_s1 - start + 1));
    if (!trimmed_str)
        return NULL;

    // Copiar la parte recortada a la nueva cadena
    strncpy(trimmed_str, &s1[start], len_s1 - start);
    trimmed_str[len_s1 - start] = '\0';  // Asegurarse de terminar con '\0'

    return trimmed_str;
}

int main(void)
{
    char s1[] = "qquuueeeeqqeu squedaneqque";
    char set[] = "que";
    char *result = ft_strtrim(s1, set);

    if (result)
    {
        write(1, result, strlen(result)); // Imprimir la cadena recortada
        free(result); // Liberar la memoria asignada
    }

    return 0;
}
