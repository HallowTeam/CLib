/*
** project.h for  in /home/olivie_v//file
** 
** Made by victor olivieri
** Login   <olivie_v@epitech.net>
** 
** Started on  Mon Oct 29 08:29:01 2012 victor olivieri
** Last update Tue Nov 13 14:02:56 2012 victor olivieri
*/

int	my_charcount(char *str, char c)
{
  int	i;
  int	count;

  i = 0;
  count = 0;
  while (str[i])
  {
    if (str[i] == c)
    {
      count++;
    }
    i++;
  }
  return (count);
}
