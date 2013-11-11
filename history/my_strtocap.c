/*
** project.h for  in /home/olivie_v//file
** 
** Made by victor olivieri
** Login   <olivie_v@epitech.net>
** 
** Started on  Mon Oct 29 08:29:01 2012 victor olivieri
** Last update Tue Nov 13 14:02:56 2012 victor olivieri
*/

char	*my_strtocap(char *str)
{
  int	i;

  i = 0;
  while (str[i])
  {
    if (i == 0 || str[i - 1] == ' ')
    {
      str[i] = my_chartoup(str[i]);
    }
    else
    {
      str[i] = my_chartolow(str[i]);
    }
    i++;
  }
  return (str);
}
