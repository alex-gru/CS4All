int main(){

  	int i;

	initLibrary();

	i = 33;

	println();
	printInteger(i);
	println();

	sched_yield();

	println();
	print((int*) "After sched_yield in user program.");
	println();

	return 1;
}
