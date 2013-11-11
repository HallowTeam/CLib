/*
** project.h for  in /home/olivie_v//file
** 
** Made by victor olivieri
** Login   <olivie_v@epitech.net>
** 
** Started on  Mon Oct 29 08:29:01 2012 victor olivieri
** Last update Tue Nov 13 14:02:56 2012 victor olivieri
*/

char	*my_substr(char *str, int a, int b)
{
  int	i;
  char	*sub;
  int	length;

  i = 0;
  length = my_strlen(str);
  a = my_int(((a < 0) ? length + a : a), 0, length);
  b = my_int(((b < 0) ? length + b - a + 1 : b), 0, length - a);
  if ((sub = malloc((b + 1) * sizeof(*sub))) == NULL)
  {
    return (NULL);
  }
  while (i < b)
  {
    sub[i] = str[a + i];
    i++;
  }
  sub[i] = '\0';
  return (sub);
}
