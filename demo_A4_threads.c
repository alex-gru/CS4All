int main(){

  int i;

	initLibrary();

	i = 33;

	println();
	printInteger(i);
	println();

	sched_yield();
	print("After sched_yield");
	println();
	
	return 1;
}
