#include "Input.hpp"

Input* Input::instance = nullptr;

Input::Input() {}

Input::~Input() {}

Input* Input::GetInstance()
{
	if (instance == nullptr)
	{
		instance = new Input();
	}
	return instance;
}

void Input::DestroyInstance()
{
	if (instance)
	{
		delete instance;
		instance = nullptr;
	}
}

void Input::PreUpdate() {}

void Input::PostUpdate()
{
	prevStatus = currStatus;
}

void Input::Update(const int key, const int action)
{
	if ((key >= 0) && (key < MAX_KEYS) && (action != 2))
	{
		// Backup the curStatus to prevStatus
		prevStatus.set(key, currStatus[key]);
		// Set the new status to curStatus
		currStatus.set(key, action);
	}
}

bool Input::IsKeyDown(const int key)
{
	return currStatus.test(key);
}

bool Input::IsKeyUp(const int key)
{
	return !currStatus.test(key);
}

bool Input::IsKeyPressed(const int key)
{
	return IsKeyDown(key) && !prevStatus.test(key);
}

bool Input::IsKeyReleased(const int key)
{
	return IsKeyUp(key) && prevStatus.test(key);
}

void Input::ResetKey(const int key)
{
	currStatus[key] = false;
	prevStatus[key] = false;
}

void Input::Reset()
{
	for (int key = 0; key < MAX_KEYS; key++)
	{
		currStatus[key] = false;
		prevStatus[key] = false;
	}
}

