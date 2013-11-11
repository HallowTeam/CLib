/*
** project.h for  in /home/olivie_v//file
**
** Made by victor olivieri
** Login   <olivie_v@epitech.net>
**
** Started on  Mon Oct 29 08:29:01 2012 victor olivieri
** Last update Tue Nov 13 14:02:56 2012 victor olivieri
*/

int	my_strcount(char *str, char *pattern)
{
  int	i;
  int	x;
  int	count;

  i = 0;
  count = 0;
  while (str[i])
  {
    x = 0;
    while (pattern[x] && str[i + x] && pattern[x] == str[i + x])
    {
      x++;
    }
    if (pattern[x] == '\0')
    {
      count++;
    }
    i++;
  }
  return (count);
}
