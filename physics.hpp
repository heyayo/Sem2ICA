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
		struct Line
		{
			Vector3 start;
			Vector3 end;
			float length;
		};

		bool radius(const radial& a, const radial& b);
		bool square(const Quad& a, const Quad& b);
		bool squareradius(const Quad& a, const radial& b);
		bool line(const Line& a, const Line& b);
		bool lineradius(const Line& a, const radial& b);

		Vector3 ScalarToVector(float length, float direction);
