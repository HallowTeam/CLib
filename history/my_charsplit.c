/*
** project.h for  in /home/olivie_v//file
**
** Made by victor olivieri
** Login   <olivie_v@epitech.net>
**
** Started on  Mon Oct 29 08:29:01 2012 victor olivieri
** Last update Tue Nov 13 14:02:56 2012 victor olivieri
*/

char	**my_charsplit(char *str, char c)
{
  int	i;
  int	a;
  int	b;
  char	**tab;
  int	length;

  i = a = b = 0;
  length = my_charcount(str, c) + 1;
  if ((tab = malloc((length + 1) * sizeof(*tab))) == NULL)
  {
    return (NULL);
  }
  while (i < length)
  {
    a = ((i == 0) ? 0 : b + 1);
    b = my_charposz(str, c, a, -1);
    tab[i++] = my_substr(str, a, ((b < 0) ? -1 : b - a));
  }
  tab[length] = '\0';
  return (tab);
}
