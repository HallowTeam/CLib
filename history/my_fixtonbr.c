/*
** project.h for  in /home/olivie_v//file
**
** Made by victor olivieri
** Login   <olivie_v@epitech.net>
**
** Started on  Mon Oct 29 08:29:01 2012 victor olivieri
** Last update Tue Nov 13 14:02:56 2012 victor olivieri
*/

void	my_fixtonbr(int num, int size, char *basis)
{
  free(my_fixstr(my_tonbr(num, basis), '0', size, 1));
}
