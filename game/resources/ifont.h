
#pragma once

#include "framework/includes.h"

#define APOCFONT_ALIGN_LEFT	0
#define APOCFONT_ALIGN_CENTRE	1
#define APOCFONT_ALIGN_RIGHT	2

namespace OpenApoc {
class Renderer;

class IFont
{
	public:
		virtual ~IFont() {};
		virtual void DrawString( Renderer &r, int X, int Y, std::string Text, int Alignment ) = 0;
		virtual int GetFontHeight() = 0;
		virtual int GetFontWidth(std::string Text) = 0;
};

}; //namespace OpenApoc
