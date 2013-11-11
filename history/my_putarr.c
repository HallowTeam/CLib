/*
** project.h for  in /home/olivie_v//file
** 
** Made by victor olivieri
** Login   <olivie_v@epitech.net>
** 
** Started on  Mon Oct 29 08:29:01 2012 victor olivieri
** Last update Tue Nov 13 14:02:56 2012 victor olivieri
*/

void	my_putarr(int *arr, int len)
{
  int	i;

  i = 0;
  while (i < len)
  {
    my_putdec(arr[i]);
    if (i + 1 < len)
    {
      my_putchar(',');
      my_putchar(' ');
    }
    i++;
  }
}
