#pragma once

template<typename T>

class Gift
{
	T itemInside;
public:
	void Shake()
	{
		itemInside.MakeNoise();
	}
	//Gift();
	//~Gift();
};

