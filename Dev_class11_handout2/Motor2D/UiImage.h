#ifndef _UIIMAGE_
#define _UIIMAGE_


#include "Ui.h"
#include "SDL/include/SDL.h"
#include "p2Defs.h"
#include "p2Point.h"

class UiImage : public UI
{
public:

	UiImage() { };

	void Draw() { };

public:
	SDL_Rect position;
};


#endif
