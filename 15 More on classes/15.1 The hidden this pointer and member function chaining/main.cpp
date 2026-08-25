#include <iostream>

class Simple
{
private:
	int m_id {};

public:
	Simple(int id)
		: m_id{ id }
	{}

	int getID() const { return m_id; }
	void setID(int id) { m_id = id; }

	void print() const { std::cout << this->m_id; }
};

int main()
{
	Simple simple{ 1 };
	simple.setID(2);

	simple.print();
	return 0;
}

