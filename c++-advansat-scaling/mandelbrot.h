#pragma once
class mandelbrot
{
public:
	static const int MAX_ITERATIONS = 1000;

public:
	mandelbrot();
	virtual~mandelbrot();

	static int getiterations(double x, double y);
};

