/*
** project.h for  in /home/olivie_v//file
**
** Made by victor olivieri
** Login   <olivie_v@epitech.net>
**
** Started on  Mon Oct 29 08:29:01 2012 victor olivieri
** Last update Tue Nov 13 14:02:56 2012 victor olivieri
*/

int	my_tabflen(char **tab)
{
  int	i;
  int	length;

  i = 0;
  length = 0;
  while (tab[i])
  {
    length += my_strlen(tab[i]);
    i++;
  }
  return (length);
}
