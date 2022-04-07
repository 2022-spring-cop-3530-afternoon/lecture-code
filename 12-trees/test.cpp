#include "../catch/catch.hpp"
#include "node.hpp"
#include "tree.hpp"

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

TEST_CASE ("Tree")
{
	Tree<int> t;
	t.Insert(2);
	CHECK(2 == t.GetRoot()->GetData());

	t.Insert(1);
	t.Insert(4);
	t.Insert(5);
	t.Insert(3);

	CHECK(2 == t.GetRoot()->GetData());
	CHECK(3 == t.GetRoot()->GetRight()->GetLeft()->GetData());
}