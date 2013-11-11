/*
** project.h for  in /home/olivie_v//file
**
** Made by victor olivieri
** Login   <olivie_v@epitech.net>
**
** Started on  Mon Oct 29 08:29:01 2012 victor olivieri
** Last update Tue Nov 13 14:02:56 2012 victor olivieri
*/

int	my_readfile(int fd, char **content)
{
  int	blen;
  int	bcur;
  int	ccur;
  int	size;
  char	buffer[READ_SIZE];

  blen = 0;
  ccur = 0;
  while ((blen = read(fd, buffer, READ_SIZE)) > 0)
  {
    size = (ccur + READ_SIZE + 1) * sizeof(*content);
    if ((bcur = 0) == 0 && (*content = my_extstr(*content, ccur, size)) == NULL)
    {
      return (-1);
    }
    while (bcur < blen)
    {
      (*content)[ccur++] = buffer[bcur++];
    }
  }
  if (ccur > 0)
  {
    (*content)[ccur] = '\0';
  }
  return ((blen == -1) ? blen : ccur);
}
