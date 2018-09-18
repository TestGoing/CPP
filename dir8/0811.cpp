// Attempting to modify a constant pointer to nonconstant data

int main()
{
	int x, y;
	// ptr is a constant pointer t oan integer that can
	// be modified through ptr, but ptr always points to the
	// same memory location.
	int * const ptr = &x;
	*ptr = 7;
	ptr = &y;

}