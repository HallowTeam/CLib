/*
** project.h for  in /home/olivie_v//file
**
** Made by victor olivieri
** Login   <olivie_v@epitech.net>
**
** Started on  Mon Oct 29 08:29:01 2012 victor olivieri
** Last update Tue Nov 13 14:02:56 2012 victor olivieri
*/

char	*my_tabjoin(char **tab, char *glue)
{
  char	*str;
  int	extra;
  int	length;
  int	flength;

  length = my_tablen(tab);
  flength = my_tabflen(tab);
  extra = my_strlen(glue) * my_max(length - 1, 0);
  if ((str = malloc((extra + flength + 1) * sizeof(str))) == NULL)
  {
    return (NULL);
  }
  str[extra + flength] = '\0';
  flength = extra = 0;
  while (tab[extra])
  {
    my_strncpyz(str, tab[extra], flength, -1);
    flength += my_strlen(tab[extra]);
    if (extra + 1 != length)
      my_strncpyz(str, glue, flength, -1);
    flength += my_strlen(glue);
    extra++;
  }
  return (str);
}
