/*
** project.h for  in /home/olivie_v//file
** 
** Made by victor olivieri
** Login   <olivie_v@epitech.net>
** 
** Started on  Mon Oct 29 08:29:01 2012 victor olivieri
** Last update Tue Nov 13 14:02:56 2012 victor olivieri
*/

int	my_strtodec(char *str, char *basis)
{
  int	pos;
  int	num;
  int	sign;
  int	index;
  int	length;

  num = 0;
  sign = ((str[0] == '-') ? -1 : 1);
  index = ((str[0] == '-' || str[0] == '+') ? 1 : 0);
  length = my_strlen(basis);
  while (str[index])
  {
    pos = my_charpos(basis, str[index]);
    num = my_add(my_mul(num, length), pos * sign);
    index++;
  }
  return (num);
}
