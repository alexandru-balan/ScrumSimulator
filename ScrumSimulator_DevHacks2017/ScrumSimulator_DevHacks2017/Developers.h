#pragma once
class Developers
{
private:
	char gender;
	int motivationLevel;
	int velocity;
	char primary[15], secondary[15];

public:
	Developers();
	void verificare();
	void afisare();
	~Developers();
};

