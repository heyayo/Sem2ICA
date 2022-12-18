#include "physics.hpp"
#include <cmath>

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
			float xDist = std::fabs(b.position.x - a.position.x);
			float yDist = std::fabs(b.position.y - a.position.y);

			float xColDist = (a.size.x * 0.5f) + b.radius;
			float yColDist = (a.size.y * 0.5f) + b.radius;
			//std::cout << xDist << ',' << yDist << ',' << xColDist << ',' << yColDist << std::endl;
			
			return (xDist <= xColDist && yDist <= yColDist);
		}
		bool line(const Line& a, const Line& b) // Not Tested
		{
			/*
			float h = (line_r2e.x - line_r2s.x) * (line_r1s.y - line_r1e.y) - (line_r1s.x - line_r1e.x) * (line_r2e.y - line_r2s.y);
					float t1 = ((line_r2s.y - line_r2e.y) * (line_r1s.x - line_r2s.x) + (line_r2e.x - line_r2s.x) * (line_r1s.y - line_r2s.y)) / h;
					float t2 = ((line_r1s.y - line_r1e.y) * (line_r1s.x - line_r2s.x) + (line_r1e.x - line_r1s.x) * (line_r1s.y - line_r2s.y)) / h;
					*/
			float h = (b.end.x - b.start.x) * (a.start.y - a.end.y) - (a.start.x - a.end.x) * (b.end.y - b.start.y);
			float t1 = ((b.start.y - b.end.y) * (a.start.x - b.start.x) + (b.end.x - b.start.x) * (a.start.y - b.start.y)) / h;
			float t2 = ((a.start.y - a.end.y) * (a.start.x - b.start.x) + (a.end.x - a.start.x) * (a.start.y - b.start.y)) / h;
			if (t1 >= 0.f && t1 < 1.f && t2 >= 0.f && t2 < 1.f) return true;
			return false;
		}
		bool lineradius(const Line& a, const radial& b)
		{
			Vector3 AB = a.end - a.start;
			Vector3 AE = b.position - a.start;
			Vector3 BE = b.position - a.end;
			float distance = 0;

			if (AB.Dot(BE) > 0)
				distance = BE.LengthSquared();
			else
			if (AB.Dot(AE) < 0)
				distance = AE.LengthSquared();
			else
			{
				distance = AB.LengthSquared();
				AB = AB.Cross(-AE);
				distance = AB.LengthSquared() / distance;
			}

			return (distance < b.radius * b.radius);
		}

		Vector3 ScalarToVector(float length, float direction)
		{
			float radian = Math::DegreeToRadian(direction);
			return
			{
				cos(radian)*length,
				sin(radian)*length,
				0
			};
		}
