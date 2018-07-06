#include "stdafx.h"
#include "MatrixRelation.h"
#include "stdafx.h"

using namespace std;

MatrixRelation::MatrixRelation()
= default;

MatrixRelation::MatrixRelation(const MatrixRelation& mr)
{
}

MatrixRelation::MatrixRelation(const MatrixRelation&& mr) noexcept
{
}


MatrixRelation::~MatrixRelation()
= default;

void MatrixRelation::test()
{
	cout << "This is a matrix relation" << endl;
}
