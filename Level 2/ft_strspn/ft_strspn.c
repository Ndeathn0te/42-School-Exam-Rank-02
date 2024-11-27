#include <stddef.h>

size_t	ft_strspn(const char *s, const char *accept)
{
    int count;
    int i;

    count = 0;
    i = 0;
    while (*s)
    {
        while (accept[i] && *s != accept[i])
            i++;
        if (accept[i] == '\0')
            return (count);
        i = 0;
        count++;
        s++;
    }
    return (count);
}
