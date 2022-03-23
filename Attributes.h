#include <iostream>
#include <istream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <random>
#include <time.h>

using namespace std;

class Attributes
{
public:
	// Babdulishness
	float babdulishness;

	// Shooting Attributes
	int shotClose;
	int shotMid;
	int shot3;

	// Playmaking Attributes
	int passAccuracy;

	// Defense Attributes
	int perimeterD;
	int interiorD;
	int shotContest;
	int block;

	// Rebounding Attributes
	int defRebound;
	int offRebound;

	// Athleticism Attributes
	int strength;
	int speed;
};