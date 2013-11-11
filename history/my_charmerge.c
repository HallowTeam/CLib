/*
** project.h for  in /home/olivie_v//file
** 
** Made by victor olivieri
** Login   <olivie_v@epitech.net>
** 
** Started on  Mon Oct 29 08:29:01 2012 victor olivieri
** Last update Tue Nov 13 14:02:56 2012 victor olivieri
*/

char	*my_charmerge(char *str, char c)
{
  int	i;
  int	offset;
  int	length;

  i = 1;
  offset = 0;
  length = my_strlen(str);
  while (i < length)
  {
    if (str[i - 1] == c && str[i] == c)
    {
      offset = offset + 1;
    }
    str[i - offset] = str[i];
    i++;
  }
  i = 0;
  while (i < offset)
  {
    str[length - offset + i] = '\0';
    i++;
  }
  return (str);
}
