/*
** project.h for  in /home/olivie_v//file
** 
** Made by victor olivieri
** Login   <olivie_v@epitech.net>
** 
** Started on  Mon Oct 29 08:29:01 2012 victor olivieri
** Last update Tue Nov 13 14:02:56 2012 victor olivieri
*/

int	my_charcase(char c)
{
  if (c >= 'A' && c <= 'Z')
  {
    return (1);
  }
  else if (c >= 'a' && c <= 'z')
  {
    return (0);
  }
  return (-1);
}
