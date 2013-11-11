/*
** project.h for  in /home/olivie_v//file
** 
** Made by victor olivieri
** Login   <olivie_v@epitech.net>
** 
** Started on  Mon Oct 29 08:29:01 2012 victor olivieri
** Last update Tue Nov 13 14:02:56 2012 victor olivieri
*/

int	my_convertsize(int num, int length)
{
  int	i;
  int	parts[2];

  if (num == 0)
  {
    return (1);
  }
  i = 0;
  parts[1] = (num % length) * ((num < 0) ? -1 : 1);
  parts[0] = (num / length) * ((num < 0) ? -1 : 1);
  while (parts[0] > 0 || parts[1] > 0)
  {
    parts[1] = parts[0] % length;
    parts[0] = parts[0] / length;
    i++;
  }
  return (i);
}
