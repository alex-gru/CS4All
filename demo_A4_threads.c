void main(){

  	int a;
  	int b;
  	int i;
  	int procID;

	initLibrary();

	i = 33;
	a = 22;

	println();
	printInteger(i+a);
	println();

	sched_yield();

	return 1;
}
