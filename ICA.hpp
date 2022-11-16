#ifndef ICA_HPP
#define ICA_HPP
#include "Scene.h"
#include <vector>
#include <memory>
class ICA : public Scene
{
	Renderer lightRender;
	std::vector<std::shared_ptr<Object>> objects;

public:
	void Init() override;
	void Update(double dt) override;
	void Render() override;
	void Exit() override;
};

#endif