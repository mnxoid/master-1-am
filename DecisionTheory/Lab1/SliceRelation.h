#pragma once
#include "Relation.h"
// ReSharper disable once CppInconsistentNaming
/**
 * \brief Slice relation class: upper intersect representation
 */
class SliceRelation :
	public Relation
{
public:
	/**
	 * \brief Default constructor
	 */
	SliceRelation();
	/**
	* \brief Copy constructor
	* \param mr Copy instance
	*/
	SliceRelation(const SliceRelation& mr);
	/**
	* \brief Move constructor
	* \param mr Temporary instance to be moved
	*/
	SliceRelation(const SliceRelation&& mr) noexcept;
	/**
	 * \brief Destructor for SliceRelation class
	 */
	~SliceRelation();
	/**
	 * \brief Just a test virtual method
	 */
	void test() override;
};

