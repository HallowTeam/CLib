long    invertEndian(long addr)
{
	return
	((0x000000FF & addr) << 24) |
	((0x0000FF00 & addr) <<  8) |
	((0x00FF0000 & addr) >>  8) |
	((0xFF000000 & addr) >> 24);
}
