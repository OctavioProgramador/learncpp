enum Pet	// no specified base
{
	cat,
	dog,
	pig,
	whale,
};

int main()
{
	[[maybe_unused]] Pet pet { static_cast<Pet>(2) }; // convert integer 2 to a Pet
	pet = static_cast<Pet>(3);
	return 0;
}
