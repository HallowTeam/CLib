/*
** project.h for  in /home/olivie_v//file
** 
** Made by victor olivieri
** Login   <olivie_v@epitech.net>
** 
** Started on  Mon Oct 29 08:29:01 2012 victor olivieri
** Last update Tue Nov 13 14:02:56 2012 victor olivieri
*/

int	my_fact(int a)
{
  if (a > 12 || a < 0)
  {
    return (0);
  }
  if (a == 0)
  {
    return (1);
  }
  if (a - 1 > 1)
  {
    a *= my_fact(a - 1);
  }
  return (a);
}
