/*
** project.h for  in /home/olivie_v//file
** 
** Made by victor olivieri
** Login   <olivie_v@epitech.net>
** 
** Started on  Mon Oct 29 08:29:01 2012 victor olivieri
** Last update Tue Nov 13 14:02:56 2012 victor olivieri
*/

char	*my_strinsert(char *str1, char *str2, int pos)
{
  int	i;
  char	*str;
  int	length1;
  int	length2;

  i = 0;
  length1 = my_strlen(str1);
  length2 = my_strlen(str2);
  pos = my_int(((pos < 0)? length1 + pos + 1 : pos), 0, length1);
  if ((str = malloc((length1 + length2 + 1) * sizeof(*str))) == NULL)
  {
    return (NULL);
  }
  while (i < length1 + length2)
  {
    str[i] = ((i < pos)? str1[i] : 
	      ((i < pos + length2)? str2[i - pos] : str1[i - length2]));
    i++;
  }
  str[i] = '\0';
  return (str);
}
