// Lab1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <conio.h>
#include <memory>

#include "MatrixRelation.h"
#include "SliceRelation.h"

using namespace std;

int main()
{
	cout << "Well, hello world, once again!" << endl;
	auto a = make_shared<MatrixRelation>();
	auto b = make_shared<SliceRelation>();
	a->test();
	b->test();
	_getch();
    return 0;
}

