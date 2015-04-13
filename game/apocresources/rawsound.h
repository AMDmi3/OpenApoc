
#pragma once

#include "framework/includes.h"
#include <allegro5/allegro_audio.h>

namespace OpenApoc {

class Framework;

class RawSound
{
	private:
		Memory* sounddata;
		ALLEGRO_SAMPLE* soundsample;

	public:
		RawSound( Framework &fw, std::string Filename );
		~RawSound();

		void PlaySound();
};

}; //namespace OpenApoc
