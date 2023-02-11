#include "physics.h"

bool CubeToCube(GameObject& cubeone, GameObject& cubetwo)
{
	Vector3 distance = cubetwo.pos - cubeone.pos;
	distance.z = 0;
	Vector3 sum = cubetwo.scale*0.5f + cubeone.scale*0.5f;

	return (std::fabs(distance.x) < sum.x) && (std::fabs(distance.y) < sum.y);
}

bool SphereToSphere(GameObject& sphereone, GameObject& spheretwo)
{
	Vector3 pos1 = sphereone.pos,pos2 = spheretwo.pos;
	pos1.z = 0;
	pos2.z = 0;
	float distance = (pos2 - pos1).LengthSquared();
	float sum = sphereone.scale.x*0.5f + spheretwo.scale.x * 0.5f;

	return distance < sum*sum;
}

bool SphereToCube(const GameObject& sphere, const GameObject& cube)
{
	float xDist = std::fabs(sphere.pos.x - cube.pos.x);
	float yDist = std::fabs(sphere.pos.y - cube.pos.y);

	float xColDist = (cube.scale.x * 0.5f) + sphere.scale.x * 0.5f;
	float yColDist = (cube.scale.y * 0.5f) + sphere.scale.x * 0.5f;
			
	return (xDist <= xColDist && yDist <= yColDist);
}

void ElasticCollisionResponse(GameObject& a, GameObject& b)
{
	Vector3 v_n = b.pos - a.pos; // v_n = normal vec. - a vector normal to the collision surface
	Vector3 v_un = v_n.Normalized(); // unit normal vector
	Vector3 v_ut(-v_un.y, v_un.x,0); // unit tangent vector
	
	// Compute scalar projections of velocities onto v_un and v_ut
	float v1n = v_un.Dot(a.vel); // Dot product
	float v1t = v_ut.Dot(a.vel);
	float v2n = v_un.Dot(b.vel);
	float v2t = v_ut.Dot(b.vel);
	
	// Compute new tangential velocities
	float v1tPrime = v1t; // Note: in reality, the tangential velocities do not change after the collision
	float v2tPrime = v2t;
	
	// Compute new normal velocities using one-dimensional elastic collision equations in the normal direction
	// Division by zero avoided. See early return above.
	float v1nPrime = (v1n * (a.mass - b.mass) + 2.f * b.mass * v2n) / (a.mass + b.mass);
	float v2nPrime = (v2n * (b.mass - a.mass) + 2.f * a.mass * v1n) / (a.mass + b.mass);
	
	// Compute new normal and tangential velocity vectors
	Vector3 v_v1nPrime = v1nPrime * v_un; // Multiplication by a scalar
	Vector3 v_v1tPrime = v1tPrime * v_ut;
	Vector3 v_v2nPrime = v2nPrime * v_un;
	Vector3 v_v2tPrime = v2tPrime * v_ut;
	
	// Set new velocities in x and y coordinates
	/*b1.setVX(v_v1nPrime.x() + v_v1tPrime.x());
	b1.setVY(v_v1nPrime.y() + v_v1tPrime.y());
	b2.setVX(v_v2nPrime.x() + v_v2tPrime.x());
	b2.setVY(v_v2nPrime.y() + v_v2tPrime.y());*/
	a.vel = (v_v1nPrime + v_v1tPrime);
	b.vel = (v_v2nPrime + v_v2tPrime);
}
