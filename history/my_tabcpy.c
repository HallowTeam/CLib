/*
** project.h for  in /home/olivie_v//file
**
** Made by victor olivieri
** Login   <olivie_v@epitech.net>
**
** Started on  Mon Oct 29 08:29:01 2012 victor olivieri
** Last update Tue Nov 13 14:02:56 2012 victor olivieri
*/

char	**my_tabcpy(char **tab)
{
  int	i;
  char	**copy;

  i = 0;
  if ((copy = malloc(sizeof(*copy) * (my_tablen(tab) + 1))) == NULL)
  {
    return (NULL);
  }
  while (tab[i])
  {
    copy[i] = my_strdup(tab[i]);
    i++;
  }
  copy[i] = NULL;
  return (copy);
}
