#pragma once

/**
 * \brief Relation abstract class. Represents a binary relation.
 */
// ReSharper disable once CppInconsistentNaming
class Relation
{
public:
	/**
	 * \brief Pure virtual destructor
	 */
	virtual ~Relation() = default;
	/**
	 * \brief Pure virtual method
	 */
	virtual void test() = 0;

};
