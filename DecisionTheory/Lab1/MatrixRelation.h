#pragma once
#include "Relation.h"
// ReSharper disable CppInconsistentNaming
class MatrixRelation :
	public Relation
{
public:
	/**
	 * \brief Default constructor
	 */
	MatrixRelation();
	/**
	 * \brief Copy constructor
	 * \param mr Copy instance
	 */
	MatrixRelation(const MatrixRelation& mr);
	/**
	 * \brief Move constructor
	 * \param mr Temporary instance to be moved
	 */
	MatrixRelation(const MatrixRelation&& mr) noexcept;
	/**
	 * \brief Virtual destructor
	 */
	virtual ~MatrixRelation();
	/**
	 * \brief Virtual test method
	 */
	void test() override;
};

