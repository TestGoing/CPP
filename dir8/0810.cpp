// Attempting to modify data through a
// nonconstant pointer to constant data.
void f( const int * ); // prototype

int main()
{
	int y = 0;
	f( &y );
}

void f(const int *xPtr)
{
	*xPtr = 100;
}