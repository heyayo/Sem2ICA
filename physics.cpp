#include "physics.hpp"

        bool radius(const radial& a, const radial& b)
        {
			float deltaDistance = (b.position - a.position).LengthSquared();
			float contactDistance = (a.radius * a.radius) + (b.radius * b.radius);

			return deltaDistance < contactDistance;
		}
        bool square(const Quad& a, const Quad& b)
        {
			float wa = a.size.x * 0.5f;
			float ha = a.size.y * 0.5f;
			float wb = b.size.x * 0.5f;
			float hb = b.size.y * 0.5f;

			bool xLeft = (a.position.x + wa) >= (b.position.x - wb);
			bool xRight = (a.position.x - wa) <= (b.position.x + wb);
			bool yTop = (a.position.y + ha) >= (b.position.y - hb);
			bool yBottom = (a.position.y - ha ) <= (b.position.y + hb);

			return xLeft || xRight || yTop || yBottom;
		}
        bool squareradius(const Quad& a, const radial& b)
        {
			float xDist = b.position.x - a.position.x;
			float yDist = b.position.y - a.position.y;

			float xColDist = (a.size.x * 0.5f) + b.radius;
			float yColDist = (a.size.y * 0.5f) + b.radius;
			//std::cout << xDist << ',' << yDist << ',' << xColDist << ',' << yColDist << std::endl;
			
			return !(xDist > xColDist || yDist > yColDist);
		}