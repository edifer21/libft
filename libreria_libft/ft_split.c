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

char **ft_split(char const *s, char c)
{
    size_t i;

    i = 0;
    ft_strchr()

    


}

int main (void)
{
    char ptr [] = "hola me quedan 6 dias";
    char a [] = " ";
    ft_split (ptr, a);    
}


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char **ft_split(char const *s, char c)
{
    int i = 0, b = 0;
    const char *ptr = s;
    char **arrstr;
    char *start = ptr;
    size_t s_len = strlen(s);
    
    // Contar cuántas subcadenas habrá
    while (*ptr != '\0')
    {
        if (*ptr == c)
            i++;
        ptr++;
    }
    i++; // Para incluir la última palabra si no termina en el delimitador

    // Asignar memoria para el array de cadenas
    arrstr = (char **)malloc((i + 1) * sizeof(char *)); // +1 para el NULL final
    if (!arrstr)
        return NULL; // Verificar si la memoria se asigna correctamente

    ptr = s; // Reiniciar el puntero
    start = ptr; // Punto de inicio de cada palabra
    
    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            size_t len = ptr - start; // Longitud de la palabra
            arrstr[b] = (char *)malloc((len + 1) * sizeof(char)); // +1 para el carácter nulo
            if (!arrstr[b])
                return NULL; // Manejar errores de asignación
            strncpy(arrstr[b], start, len);
            arrstr[b][len] = '\0'; // Terminar la cadena con '\0'
            b++;
            start = ptr + 1; // Mover el inicio a la siguiente palabra
        }
        ptr++;
    }

    // Copiar la última palabra
    size_t len = ptr - start;
    arrstr[b] = (char *)malloc((len + 1) * sizeof(char));
    strncpy(arrstr[b], start, len);
    arrstr[b][len] = '\0';
    b++;
    
    arrstr[b] = NULL; // Terminar con un NULL para indicar el final del array
    return arrstr;
}

int main(void)
{
    char str[] = "hola me quedan 6 dias";
    char delimiter = ' ';
    char **result = ft_split(str, delimiter);

    // Imprimir el resultado
    int i = 0;
    while (result[i])
    {
        printf("%s\n", result[i]);
        free(result[i]); // Liberar cada subcadena
        i++;
    }
    free(result); // Liberar el array de punteros

    return 0;
}
