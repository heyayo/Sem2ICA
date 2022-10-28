#include <bitset>
#include "GLFW/glfw3.h"

class Input
{
	Input();
	~Input();

	static Input* instance;

	public:
	static Input* GetInstance();
	static void DestroyInstance();

	const static int MAX_KEYS = 348;

	void PreUpdate();
	void PostUpdate();
	void Update(const int key, const int action);

	bool IsKeyDown(const int key);
	bool IsKeyUp(const int key);
	bool IsKeyPressed(const int key);
	bool IsKeyReleased(const int key);

	void ResetKey(const int key);
	void Reset();
	
	private:
	std::bitset<MAX_KEYS> currStatus, prevStatus;
};

