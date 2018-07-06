#include "stdafx.h"
#include "SliceRelation.h"

using namespace std;

SliceRelation::SliceRelation()
= default;

SliceRelation::SliceRelation(const SliceRelation& mr)
{
}

SliceRelation::SliceRelation(const SliceRelation&& mr) noexcept
{
}

SliceRelation::~SliceRelation()
= default;

void SliceRelation::test()
{
	cout << "This is a slice relation" << endl;
}
