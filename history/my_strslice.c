/*
** project.h for  in /home/olivie_v//file
** 
** Made by victor olivieri
** Login   <olivie_v@epitech.net>
** 
** Started on  Mon Oct 29 08:29:01 2012 victor olivieri
** Last update Tue Nov 13 14:02:56 2012 victor olivieri
*/

char	*my_strslice(char *str, int a, int b)
{
  int	i;
  int	x;
  char	*sub;
  int	length;

  i = 0;
  x = 0;
  length = my_strlen(str);
  a = my_int(((a < 0) ? length + a : a), 0, length);
  b = my_int(((b < 0) ? length + b - a + 1 : b), 0, length - a);
  if ((sub = malloc((b + 1) * sizeof(*sub))) == NULL)
  {
    return (NULL);
  }
  while (i < length)
  {
    if (i >= a && i < a + b)
    {
      sub[x++] = str[i];
    }
    str[i] = ((i < a)? str[i] : ((i < length - b)? str[i + b] : '\0'));
    i++;
  }
  sub[x] = '\0';
  return (sub);
}
