// This function is declared as static, and can now be used only within this// file 
// Attempts to acces it from another file via a funcion forward declaration // will fail
[[maybe_unused]] static int add(int x, int y)
{
	return x+y;
}
