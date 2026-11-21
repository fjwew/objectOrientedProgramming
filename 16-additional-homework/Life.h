#pragma once

class Life
{
	int health;
	int age;
	int maxAge;
	int eatBar;

public:
	Life() : age(0), maxAge(0), eatBar(0) {}
	Life(int maxAge) : age(0), maxAge(maxAge), eatBar(70) {}

	int getAge() const
	{
		return age;
	}

	int getHealth() const
	{
		return health;
	}

	int getmaxAge() const
	{
		return maxAge;
	}

	int geteatBar() const
	{
		return eatBar;
	}


};