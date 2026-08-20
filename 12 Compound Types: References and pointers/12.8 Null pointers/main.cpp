int main()
{
	int * ptr { nullptr };
	int value { 5 };
	int * ptr2 { &value };
	ptr2 = nullptr;
	return 0;
}
