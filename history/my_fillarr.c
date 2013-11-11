/*
** project.h for  in /home/olivie_v//file
** 
** Made by victor olivieri
** Login   <olivie_v@epitech.net>
** 
** Started on  Mon Oct 29 08:29:01 2012 victor olivieri
** Last update Tue Nov 13 14:02:56 2012 victor olivieri
*/

int	*my_fillarr(int *arr, int len, int nbr)
{
  int	i;

  i = 0;
  while (i < len)
  {
    arr[i] = nbr;
    i++;
  }
  return (arr);
}
