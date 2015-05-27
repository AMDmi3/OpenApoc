
#pragma once

#include "framework/image.h"
#include "control.h"

namespace OpenApoc {

class Graphic : public Control
{

	private:
		UString image_name;
		std::shared_ptr<Image> image;

	protected:
		virtual void OnRender();

	public:
		Graphic( Framework &fw, Control* Owner, UString Image );
		virtual ~Graphic();

		virtual void EventOccured( Event* e );
		virtual void Update();
		virtual void UnloadResources();

		std::shared_ptr<Image> GetImage();
		void SetImage( std::shared_ptr<Image> Image );
};

}; //namespace OpenApoc
