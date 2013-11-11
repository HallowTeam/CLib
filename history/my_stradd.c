/*
** project.h for  in /home/olivie_v//file
**
** Made by victor olivieri
** Login   <olivie_v@epitech.net>
**
** Started on  Mon Oct 29 08:29:01 2012 victor olivieri
** Last update Tue Nov 13 14:02:56 2012 victor olivieri
*/

char	**my_stradd(char ***tab, char *value)
{
  int	i;
  int	length;
  char	**copy;

  i = 0;
  length = my_tablen(*tab);
  if ((copy = malloc((length + 2) * sizeof(*tab))) == NULL)
  {
    return (NULL);
  }
  while (i < length)
  {
    copy[i] = my_strdup((*tab)[i]);
    i++;
  }
  copy[i++] = my_strdup(value);
  copy[i++] = NULL;
  my_freetab(*((void ***)tab));
  return (*tab = copy);
}
