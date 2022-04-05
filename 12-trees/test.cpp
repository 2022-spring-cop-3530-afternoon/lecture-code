#include "../catch/catch.hpp"
#include "node.hpp"

TEST_CASE("Node test")
{
	Node<int> n(12);
	CHECK(12 == n.GetData());

	CHECK(nullptr == n.GetLeft());
	CHECK(nullptr == n.GetRight());

	Node<int>* l = new Node<int>(5);
	Node<int>* r = new Node<int>(15);

	n.SetLeft(l);
	n.SetRight(r);

	CHECK(l == n.GetLeft());
	CHECK(r == n.GetRight());
}