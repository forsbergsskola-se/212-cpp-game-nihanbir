#include "LButton.h"

LButton::LButton()
{
	mPosition.x = 14;
	mPosition.y = 84;
}

void LButton::setPosition(int x, int y)
{
	mPosition.x = x;
	mPosition.y = y;
}

bool LButton::isClicked(int width, int height)
{
	//Get mouse position
	int x, y;
	SDL_GetMouseState(&x, &y);
	//Mouse is left of the button
	if (x < mPosition.x) return false;
	//Mouse is right of the button
	else if (x > mPosition.x + width) return false;
	//Mouse above the button
	else if (y < mPosition.y) return false;
	//Mouse below the button
	else if (y > mPosition.y + height) return false;
	return true;
}

