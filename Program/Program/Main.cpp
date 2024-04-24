#include <iostream>
#include "Progression.h"

using namespace std;

Progression Make_Progression(double fst, int snd) {
	Progression temp;
	temp.Init(fst, snd);
	return temp;
}

int main() {
	Progression prog;
	prog.Init(1, 1);
	prog.Set1(3.5);
	prog.Set2(2);
	cout << "Values of prog " << endl;
	prog.Show();
	cout << "Value of 3rd element: " << prog.element(3) << endl;

	Progression prog2;
	prog2 = Make_Progression(4.5, 2);
	prog.Show();
}