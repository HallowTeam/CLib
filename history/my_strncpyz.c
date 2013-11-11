/*
** project.h for  in /home/olivie_v//file
**
** Made by victor olivieri
** Login   <olivie_v@epitech.net>
**
** Started on  Mon Oct 29 08:29:01 2012 victor olivieri
** Last update Tue Nov 13 14:02:56 2012 victor olivieri
*/

char	*my_strncpyz(char *dest, char *src, int a, int n)
{
  int	i;
  int	length;

  i = 0;
  n = ((n < 0)? my_max(0, my_strlen(src) + n + 1): n);
  length = my_strlen(src);
  while (i < n)
  {
    dest[a + i] = ((i < length)? src[i] : '\0');
    i++;
  }
  return (dest);
}
