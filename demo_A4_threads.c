void main(){

  int a;
  int b;
  int i;
  int procID;

	initLibrary();

	a = getpid();
	procID = getpid();
	b = 10;

	procID = getpid();

	println();
	print((int*) "getpid result: ");
	printInteger(procID);
	println();

	println();
	print("a(");
	printInteger(procID);
	print(") = ");
	printInteger(a);
	println();

	println();
	print("b(");
	printInteger(procID);
	print(") = ");
	printInteger(b);
	println();

	sched_yield();

	println();
	print((int*) "After first sched_yield in user program.");
	println();

	i = a + b;

	println();
	print("i(");
	printInteger(procID);
	print(") = ");
	printInteger(i);
	println();

	return;
}
