#include <math.h>
#include "Vector3.h"

		struct radial
		{
			Vector3 position;
			float radius;
		};
		struct Quad
		{
			Vector3 position;
			Vector3 size;
		};

		bool radius(const radial& a, const radial& b);
		bool square(const Quad& a, const Quad& b);
		bool squareradius(const Quad& a, const radial& b);
