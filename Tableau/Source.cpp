#include"TableauBorne.h"
using namespace INTERV;
int main() {
	TableauBorne A(1,2,4);
	A(0, 1);
	A(1, 1.15);
	A(2, 2);
	A(3, 1.5);
	A(2, 2.4);
	A.Print();
	TableauBorne B(A);
	B.Print();
}