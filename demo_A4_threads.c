void main(){
  	int i;

	initLibrary();

	i = 33;

	println();
	printInteger(i);
	println();

	sched_yield();

	println();
	printInteger(44);
	println();
	printInteger(55);
	println();

	//return 1;
}
