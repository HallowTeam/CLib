/*
** project.h for  in /home/olivie_v//file
**
** Made by victor olivieri
** Login   <olivie_v@epitech.net>
**
** Started on  Mon Oct 29 08:29:01 2012 victor olivieri
** Last update Tue Nov 13 14:02:56 2012 victor olivieri
*/

void	my_putbytes(char *str, int length)
{
  int	i;
  int	line;
  int	lines;

  i = 0;
  line = -1;
  lines = my_ceil(length, 16);
  while (++line < lines)
  {
    my_fixtonbr(line * 16, 8, BASIS_HEX);
    my_putstr("  ");
    while (i - 16 * line < 16)
    {
      ((i >= length) ? my_putstr("  ") : my_fixtonbr(str[i], 2, BASIS_HEX));
      ((i % 2 == 1) ? my_putstr("  ") : my_putstr(""));
      i++;
    }
    i = i - 16;
    while (i - 16 * line < 16 && i < length)
    {
      ((my_charisdisp(str[i])) ? my_putchar(str[i]) : my_putchar('.'));
      i++;
    }
    my_putchar('\n');
  }
}
