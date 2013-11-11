/*
** project.h for  in /home/olivie_v//file
**
** Made by victor olivieri
** Login   <olivie_v@epitech.net>
**
** Started on  Mon Oct 29 08:29:01 2012 victor olivieri
** Last update Tue Nov 13 14:02:56 2012 victor olivieri
*/

char	**my_strrm(char **tab, int index)
{
  int	i;

  i = 0;
  while (tab[i])
  {
    if (i < index)
    {
      tab[i] = tab[i];
    }
    else if (i > index)
    {
      tab[i - 1] = tab[i];
    }
    else
    {
      free(tab[i]);
    }
    i++;
  }
  if (i != 0)
  {
    tab[i - 1] = NULL;
  }
  return (tab);
}
