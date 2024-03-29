#pragma once
#pragma once
#include "Ground.h"
#include "modelerview.h"
#include "modelerapp.h"
#include "modelerdraw.h"
#include "MetaBall.h"
#include "UpperLeg.h"
#include <FL/gl.h>
#include "FL/GLU.h"
#include "global.h"
#include "modelerglobals.h"
#include "canon.h"
#include "Head.h"
#include "Torus.h"
#include "GL/gl.h"
#include <chrono>
#include "Tentacle.h"
#pragma once
#include "Ground.h"
#include "modelerview.h"
#include "modelerapp.h"
#include "modelerdraw.h"
#include "MetaBall.h"
#include "UpperLeg.h"
#include <FL/gl.h>
#include "FL/GLU.h"
#include "global.h"
#include "modelerglobals.h"
#include "canon.h"
#include "Head.h"
#include "Torus.h"
#include "GL/gl.h"
#include <chrono>
#include "LegPhysics.h"
using namespace std::chrono;
#include "Tentacle.h"
struct Rigid :Component
{
	//Rigid(int x, int y, int z, int w, int l, int h, ModelerView* view);
	Rigid(float x, float y, float z, float r, string shape, ModelerView* view);

	//Rigid(int x, int y, int w, int h, char* label);

	ModelerView* view;
	bool project;
	bool project2;
	float mass ;
	//body parts

	float radius ; //for sphere
	vector<Vec3f> points;
	float gf = 0.1;
	Vec3f netforce;
	Vec3f velocity;
	Vec3f acc;
	bool collisionDetect( Rigid r2);
	Vec3f collideForce( Rigid r2);
	void updateBody();
	void gravity();
	string shape;
	virtual void draw();
	void setup();
	
};