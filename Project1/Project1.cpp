#include "Project1.h"

HFONT Font()
{
	return CreateFont(
		-15, -7.5, 0, 0, 400,
		FALSE, FALSE, FALSE,
		DEFAULT_CHARSET,
		OUT_CHARACTER_PRECIS, CLIP_CHARACTER_PRECIS,
		DEFAULT_QUALITY,
		FF_DONTCARE,
		_T("Î¢ÈíÑÅºÚ")
	);
}