int main(){
  	int i;

	initLibrary();

	i = 33;

	println();
	printInteger(i);
	println();

	sched_yield();

	return 1;
}
