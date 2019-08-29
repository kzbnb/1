#pragma once
#ifndef POINT
#define POINT
#include"shu.h"
#include"situation.h"

class point
{
public:
	int x, y;
	situation shuiping(int  ,int);

	situation shuzhi(int, int);
	situation zuoxie(int, int);
	situation youxie(int, int);
	//void after_score( );
	shu count(int,int,int);
	point(int,int);
	point()
	{
		;
	}
	void after_score();
	point(const point& p)
	{
		x = p.x;
		y = p.y;
		
	}
	
};
#endif // !POINT
